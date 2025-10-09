#include "libft.h"

int	ft_strlen(char *str)
{
	int	current;

	current = 0;
	while (*str)
	{
		str++;
		current++;
	}
	return (current);
}