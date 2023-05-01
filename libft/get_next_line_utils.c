
#include "get_next_line.h"

/***
 * function locates the first occurrence of (char) c
 * in the string pointed to by s
 */
char	*ft_strchr(const char *str, int n)
{
	char	*temp;

	temp = (char *) str;
	while (*temp != (char)n)
	{
		if (*temp == 0)
			return (NULL);
		temp++;
	}
	return ((char *)temp);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

/***
 * function allocates sufficient memory for a copy of the
 * string, does the copy, and returns a pointer to it
 */
char	*ft_strdup(const char *str)
{
	char	*newstr;
	size_t	length;
	size_t	counter;

	length = ft_strlen(str) + 1;
	newstr = (char *)malloc(sizeof(char) * length);
	if (newstr == NULL)
		return (NULL);
	counter = -1;
	while (++counter < length)
		newstr[counter] = str[counter];
	return (newstr);
}

/***
 * Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	index;
	size_t	srclen;

	if (!s)
		return (NULL);
	srclen = ft_strlen(s);
	if (start > srclen)
		return (ft_strdup(""));
	if (start + len > srclen)
		len = srclen - start;
	substring = (char *)malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	index = 0;
	while (s[start + index] && index < len)
	{
		substring[index] = s[start + index];
		index++;
	}
	substring[index] = '\0';
	return (substring);
}

/**
 * Allocates (with malloc(3)) and returns a new string,
 * which is the result of the concatenation of ’s1’ and ’s2’
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatstr;
	int		i_loopcntr;
	int		j_loopcntr;
	size_t	str_memspace;

	if (!s1 || !s2)
		return (NULL);
	str_memspace = ft_strlen(s1) + ft_strlen(s2) + 1;
	concatstr = (char *)malloc(sizeof(char) * str_memspace);
	if (!concatstr)
		return (NULL);
	i_loopcntr = -1;
	while (s1[++i_loopcntr])
		concatstr[i_loopcntr] = s1[i_loopcntr];
	j_loopcntr = -1;
	while (s2[++j_loopcntr])
		concatstr[i_loopcntr + j_loopcntr] = s2[j_loopcntr];
	concatstr[i_loopcntr + j_loopcntr] = '\0';
	return (concatstr);
}
