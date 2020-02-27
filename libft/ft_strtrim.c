/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:13:24 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/21 22:30:00 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		withoutspaces(char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (j > 0)
		j--;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != 0)
		j--;
	if (j == 0)
		return (0);
	return (j - i + 1);
}

static	int		prefics2(char *s)
{
	size_t	i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
	{
		if ((s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
			break ;
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*res;
	size_t	i;
	size_t	j;
	char	*s2;
	size_t	len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	s2 = (char*)s;
	len = withoutspaces(s2);
	res = (char*)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = prefics2(s2);
	j = 0;
	while (s2[i] == ' ' && s2[i] == '\t' && s2[i] == '\n')
		i++;
	while (j < len)
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
