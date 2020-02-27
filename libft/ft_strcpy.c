/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:36:31 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 17:48:45 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;
	size_t len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (len_src)
	{
		dest[i] = src[i];
		len_src--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
