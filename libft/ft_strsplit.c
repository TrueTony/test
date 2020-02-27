/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:51:38 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 17:54:11 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		counter(char *str, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			res++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		while (str[i] == c)
			i++;
	}
	return (res);
}

static	int		nextfunction(char **res, char *str, int number, int len)
{
	size_t	j;

	j = 0;
	res[number] = (char*)malloc(sizeof(char) * len);
	if (!res[number])
	{
		number--;
		while (number >= 0)
		{
			free(res[number]);
			number--;
		}
		free(res);
		return (0);
	}
	while (len > 1)
	{
		res[number][j] = str[j];
		j++;
		len--;
	}
	res[number][j] = '\0';
	return (1);
}

static	int		giving(char **res, char *str, char c)
{
	size_t	i;
	size_t	number;
	size_t	len;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		len = 0;
		if (str[i] != c)
		{
			len++;
			while (str[i] != c && str[i] != '\0')
			{
				len++;
				i++;
			}
			if (!nextfunction(res, str + (i - len + 1), number, len))
				return (0);
			number++;
		}
		str[i] != '\0' ? i++ : i;
	}
	res[number] = NULL;
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**res;
	size_t	count;

	if (s == NULL)
		return (NULL);
	str = (char*)s;
	count = counter(str, c);
	res = (char**)malloc(sizeof(char*) * count + 1);
	if (!res)
	{
		return (NULL);
	}
	if (!giving(res, str, c))
		return (NULL);
	return (res);
}
