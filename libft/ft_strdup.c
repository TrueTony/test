/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:17:26 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 17:49:44 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*c;
	char	*notconsts;

	notconsts = (char*)s1;
	i = 0;
	len = ft_strlen(notconsts);
	c = (char*)malloc(sizeof(char) * len + 1);
	if (!c)
		return (NULL);
	while (notconsts[i] != '\0')
	{
		c[i] = notconsts[i];
		i++;
	}
	c[len] = '\0';
	return (c);
}
