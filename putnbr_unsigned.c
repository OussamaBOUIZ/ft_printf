/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:22:46 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/30 11:35:13 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	putnbr_unsigned(unsigned int u, size_t *count, int upper)
{
	char	*base;
	char	*l_base;
	char	*u_base;

	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	if (upper)
		base = u_base;
	else
		base = l_base;
	if (u >= 16)
		putnbr_unsigned(u / 16, count, upper);
	ft_putchar(base[u % 16], count);
}
