/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:16:27 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/21 23:42:07 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dlen;
	size_t			i;
	size_t			slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen + dlen);
}
