
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/***
 * read, malloc, free and
 * write, sizeof and for typedef size_t
 */
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

/***
 * prototype inheitance for the functions
 */
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
