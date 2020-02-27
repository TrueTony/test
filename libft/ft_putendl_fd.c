/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:14:02 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/18 22:55:24 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *ss;

	if (s == NULL)
		return ;
	ss = (char*)s;
	while (*ss)
	{
		write(fd, ss, 1);
		ss++;
	}
	write(fd, "\n", 1);
}
