/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:28:24 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/18 16:25:25 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *newstr;

	newstr = (char*)s;
	while (*newstr != '\0')
	{
		if (*newstr == c)
			return (newstr);
		newstr++;
	}
	if (c == '\0')
		return (newstr);
	return (NULL);
}
