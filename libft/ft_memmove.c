/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:13:16 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 17:20:22 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dd;
	unsigned char	*ss;

	i = 0;
	dd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			dd[len] = ss[len];
		return (dd);
	}
	while (i < len)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
