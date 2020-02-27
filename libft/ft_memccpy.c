/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:39:50 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 20:12:22 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*newdst;
	unsigned char	*newsrc;
	unsigned char	cc;

	i = 0;
	newdst = (unsigned char*)dst;
	newsrc = (unsigned char*)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		*newdst = *newsrc;
		if (*newsrc == cc)
		{
			newdst++;
			return (newdst);
		}
		newdst++;
		newsrc++;
		i++;
	}
	return (NULL);
}
