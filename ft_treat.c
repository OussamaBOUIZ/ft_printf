/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:47:00 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/30 12:00:38 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treat(int val, char f, size_t *count)
{
	if (f == 'c')
		ft_putchar(val, count);
	if (f == 'i' || f == 'd')
		ft_putnbr(val, count);
	if (f == 'x')
		putnbr_unsigned(val, count, 0);
	if (f == 'X')
		putnbr_unsigned(val, count, 1);
	if (f == 'u')
		ft_putnbr_u(val, count);
	if (f == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_base_u(val, count);
	}
}
