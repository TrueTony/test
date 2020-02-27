/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:33:59 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/19 17:51:36 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*newstr;
	size_t			i;

	i = 0;
	newstr = (unsigned char*)s;
	while (i < n)
	{
		if (*newstr == (unsigned char)c)
			return (newstr);
		newstr++;
		i++;
	}
	return (NULL);
}
