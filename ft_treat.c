/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:47:00 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 20:52:46 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_treat(int val, char f)
{
	if (f == 'c')
		ft_putchar(val);
	if (f == 'i' || f == 'd')
		ft_putnbr(val);
	if (f == 'x')
		ft_putnbr_base_u(val, 0);
	if (f == 'X')
		ft_putnbr_base_u(val, 1);
	if (f == 'u')
		ft_putnbr_u(val);
	if (f == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base_u(val, 0);
	}
}
