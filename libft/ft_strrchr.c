/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:18:39 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/18 19:28:08 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *sup;
	int i;
	int count;

	count = -1;
	sup = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count = i;
		}
		i++;
	}
	if (count == 0)
		return (NULL);
	return (sup + count);
}
