/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:11:11 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/17 22:01:26 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n--;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (d);
}

#include <stdio.h>

int main()
{
	// char src[] = "nonn";
	char dst[] = "abcdef";

	ft_memmove((dst), (dst + 6), 10);
	printf("%s\n", dst);
	return 0;
}
