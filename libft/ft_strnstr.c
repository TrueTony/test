/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:17:40 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/19 18:56:13 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		tmp;
	size_t		i;
	size_t		j;
	size_t		len_needle;
	char		*res;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!needle[i])
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < (len - len_needle + 1))
	{
		j = i;
		tmp = 0;
		res = ((char*)&haystack[j]);
		while (haystack[j] == needle[tmp++] && j < len)
		{
			j++;
			if (!needle[tmp])
				return (res);
		}
		i++;
	}
	return (NULL);
}
