/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvrm <mvrm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:18:39 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/22 02:22:32 by mvrm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	int count;
	unsigned char cc;

	cc = (unsigned char)c;
	count = -1;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == cc)
			count = i;
		i++;
	}
	if (cc == '\0')
		return ((char *)s + i);
	if (count == -1)
		return (NULL);
	return ((char *)s + count);
}
