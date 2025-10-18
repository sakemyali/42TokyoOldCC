/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:15:53 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/18 19:44:06 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*sup;

	i = 0;
	sup = (unsigned char *)s;
	while (i < n)
	{
		if (sup[i] == c)
			return (&sup[i]);
		i++;
	}
	return (NULL);
}
