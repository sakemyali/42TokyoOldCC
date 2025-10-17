/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:06:18 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/17 14:22:10 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t		i;
	void		*mod;

	mod = s;
	i = 0;
	while (i < n)
	{
		mod = &c;
		mod++;
		i += sizeof(s);
	}
	return (s);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	argc += 1;
	printf("%s\n", &(memset(argv, '.', 4*sizeof(char))));
	return 0;
}
