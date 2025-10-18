/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:16:19 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/18 19:39:18 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*sup;

	i = 0;
	sup = (char *)s;
	while (sup[i])
	{
		if (sup[i] == c)
			return (&sup[i]);
		i++;
	}
	return (NULL);
}
