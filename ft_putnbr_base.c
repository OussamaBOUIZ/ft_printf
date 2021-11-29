/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:43:12 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/29 17:08:00 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base16(int nbr, int upper, size_t *count)
{
	int		b_len;
	char 	*l_base;
	char 	*u_base;
	char	*base;

	b_len = 16;
	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	if (upper)
		base = u_base;
	else
		base = l_base;
	// if (nbr < 0)
	// {
	// 	ft_putchar('-');
	// 	nbr *= -1;
	// }
	if (nbr >= b_len)
		ft_putnbr_base16(nbr / b_len, upper, count);
	ft_putchar(base[nbr % b_len], count);
}
