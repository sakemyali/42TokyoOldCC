/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:06:06 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/24 16:30:30 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*mod;

	if (!s)
		return ;
	mod = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		mod[i] = '\0';
		i++;
	}
}
