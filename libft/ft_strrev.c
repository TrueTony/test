/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:20:38 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 22:21:32 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*out;
	int		len;
	char	*start;

	len = ft_strlen(str);
	out = (char*)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	start = out;
	len--;
	while (len >= 0)
	{
		*out = str[len];
		out++;
		len--;
	}
	*out = '\0';
	return (out);
}
