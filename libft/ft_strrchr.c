/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:53:08 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 20:29:05 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*mys;

	mys = (char*)s;
	i = ft_strlen(mys) + 1;
	while (i--)
	{
		if (mys[i] == c)
			return (&mys[i]);
	}
	return (NULL);
}
