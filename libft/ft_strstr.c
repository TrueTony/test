/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:15:08 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 22:22:09 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	if (string2[j] == '\0')
		return ((char *)string1);
	while (string1[i] != '\0')
	{
		if (string2[j] == string1[i])
		{
			x = i;
			while (string2[j] != '\0')
			{
				if (string1[x++] != string2[j++])
					break ;
				if (string2[j] == '\0')
					return ((char*)&string1[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
