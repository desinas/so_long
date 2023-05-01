
#include "get_next_line.h"

void	rl_free_null(char **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		ptr = NULL;
	}
}

char	*rl_join_line(int nlchr_pos, char **buff)
{
	char	*join_result;
	char	*temporary;

	temporary = NULL;
	if (nlchr_pos <= 0)
	{
		if (**buff == '\0')
		{
			free(*buff);
			*buff = NULL;
			return (NULL);
		}
		join_result = *buff;
		*buff = NULL;
		return (join_result);
	}
	temporary = ft_substr(*buff, nlchr_pos, BUFFER_SIZE);
	join_result = *buff;
	join_result[nlchr_pos] = 0;
	*buff = temporary;
	return (join_result);
}

char	*gnl_read_line(int fd, char **buff, char *rd_res)
{
	ssize_t	cnt_read_bytes;
	char	*temporary;
	char	*nlchr_position;

	nlchr_position = ft_strchr(*buff, '\n');
	temporary = NULL;
	cnt_read_bytes = 0;
	while (nlchr_position == NULL)
	{
		cnt_read_bytes = read(fd, rd_res, BUFFER_SIZE);
		if (cnt_read_bytes <= 0)
			return (rl_join_line(cnt_read_bytes, buff));
		rd_res[cnt_read_bytes] = 0;
		temporary = ft_strjoin(*buff, rd_res);
		rl_free_null(buff);
		*buff = temporary;
		nlchr_position = ft_strchr(*buff, '\n');
	}
	return (rl_join_line(nlchr_position - *buff + 1, buff));
}

/***
 * @param fd: The file descriptor to read from
 * function that returns a line read from a file descriptor
 * @return Read line:  correct behavior
 *     NULL: there is nothing else to read, or an error occurred
 */
char	*get_next_line(int fd)
{
	char		*result;
	static char	*buffer;
	char		*read_result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_result = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (read_result == NULL)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup("");
	result = gnl_read_line(fd, &buffer, read_result);
	rl_free_null(&read_result);
	return (result);
}
