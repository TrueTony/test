/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:55:16 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 20:13:42 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	dd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
