/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvrm <mvrm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:15:53 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/22 02:26:41 by mvrm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*sup;
	unsigned char	cc;

	i = 0;
	sup = (const unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (sup[i] == cc)
			return ((void *)&sup[i]);
		i++;
	}
	return (NULL);
}
