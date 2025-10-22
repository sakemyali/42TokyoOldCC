/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:16:09 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/22 20:05:07 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_itoa(n);
	if (!str)
		return ;
	while (str[i])
	{
		write(fd, &(str[i]), 1);
		i++;
	}
	free(str);
	str = NULL;
}
