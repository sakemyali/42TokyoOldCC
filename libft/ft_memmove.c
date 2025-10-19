/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:11:11 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/20 02:40:17 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		i = 0;
		printf("1");
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}

	}
	else
	{
		i = n;
		printf("2");
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (d);
}
