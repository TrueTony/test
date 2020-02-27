/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:22:56 by ksenaida          #+#    #+#             */
/*   Updated: 2020/02/27 19:56:37 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


void	ap_number_long(t_double_l d1, unsigned long long *arr, int countofel, int pow)
{
	int		i;

	i = 0;
	while (i < countofel)
		arr[i++] = 0;
	addit(arr, countofel - 1, d1.part.m);
	while (pow--)
		mult(arr, 0, 5, countofel);
	addit(arr, 10, 1000);
	pow = d1.part.e - 16383;
	if (pow > 0)
		while (pow--)
			mult(arr, 0, 2, countofel);
	else
	{
		while (pow < 0)
		{
			mult(arr, 0, 5, countofel);
			pow++;
		}
		while (pow++ < ((d1.part.e - 16383) * -1))
			divis(arr, 15, 10);
	}
}

void	handling_float_long_part2(t_printf *list, char *tmp, long long n, int s)
{
	while (*tmp == '0' && n > 1)
	{
		tmp++;
		n--;
	}
	if (((list->precision == 0 && list->np == 'n') || list->precision))
		rounding(tmp, list->precision + n);
	if (s)
		ft_putchar_cow('-', list);
	while (n--)
		ft_putchar_cow(*tmp++, list);
	if (list->precision || list->flags[3] == '#')
		ft_putchar_cow('.', list);
	while (list->precision--)
		ft_putchar_cow(*tmp++, list);
}

void	handling_float_long(long double d, int countofel, int pow, t_printf *list)
{
	t_double_l			d1;
	unsigned long long	*arr;
	int					i;
	char				*tmp;
	long long			n;

	n = 86;
	i = 0;
	d1.d = d;
	printf("m:%llu\n", d1.part.m);
	printf("e:%llu\n", d1.part.e);
	arr = (unsigned long long*)malloc(sizeof(unsigned long long) * countofel);
	ap_number_long(d1, arr, countofel, pow);
	i = 0;
	while (arr[i] == 0 && n > 10)
	{
		i++;
		n -= 10;
	}
	tmp = full_str(arr, i);
	handling_float_long_part2(list, tmp, n, d1.part.s);
	free(arr);
	free(tmp);
}
