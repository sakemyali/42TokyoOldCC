#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;
	unsigned int	res;

	i = 0;
	while (dest[i])
		i++;
	s = 0;
	while (src[s])
		s++;
	if (size > i)
		res = s + i;
	else
		res = s + size;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}