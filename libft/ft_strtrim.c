/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:19:32 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/20 06:03:09 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		*tofind;
	char	*str;
	size_t	slen;

	if (!s1)
		return (NULL);
	if (set[0] == '\0')
		return (s1);
	slen = ft_strlen(s1);
	tofind = ft_strstr(s1, set);
	str = (char *)malloc((slen - (tofind[1] - tofind[0])) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < tofind[0])
	{
		str[i++] = s1[i++];
	}
	while (str[tofind[1]])
	{
		str[i++] = s1[tofind[1]++];
	}
	str[tofind[1]] = '\0';
	return (str);
}
