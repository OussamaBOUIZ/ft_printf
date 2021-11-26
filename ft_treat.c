/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:47:00 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 17:24:16 by obouizga         ###   ########.fr       */
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
		ft_putnbr_base16(val, 0);
	if (f == 'X')
		ft_putnbr_base16(val, 1);
	if (f == 'u')
		ft_putnbr(val);
}
