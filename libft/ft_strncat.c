/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:15:46 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 22:18:54 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len1;

	i = 0;
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[i] != '\0' && n)
	{
		s1[len1] = s2[i];
		len1++;
		i++;
		n--;
	}
	s1[len1] = '\0';
	return (s1);
}
