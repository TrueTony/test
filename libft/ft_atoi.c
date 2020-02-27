/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:50:59 by ksenaida          #+#    #+#             */
/*   Updated: 2019/09/22 19:46:17 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned long long	ft_maxmin(char *notcs, int sign)
{
	unsigned long long	res;
	size_t				i;

	i = 0;
	res = 0;
	while (notcs[i] >= '0' && notcs[i] <= '9')
	{
		res = (res * 10) + (notcs[i] - '0');
		i++;
	}
	if (sign == -1)
	{
		if (res == 9223372036854775807)
			return (0);
		if (res > 9223372036854775807)
			return (0);
		return (res);
	}
	if (res == 9223372036854775807)
		return (-1);
	if (res > 9223372036854775807)
		return (-1);
	return (res);
}

int							ft_atoi(const char *str)
{
	size_t				i;
	int					sign;
	unsigned long long	res;
	char				*notcs;

	notcs = (char*)str;
	res = 0;
	sign = 1;
	i = ft_prefics(notcs);
	if (notcs[i] == '-' || notcs[i] == '+')
	{
		if (notcs[i] == '-')
			sign = -1;
		i++;
	}
	res = ft_maxmin(notcs + i, sign);
	return (((int)res) * sign);
}
