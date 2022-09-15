/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:22:46 by obouizga          #+#    #+#             */
/*   Updated: 2022/09/15 19:03:36 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_hex(unsigned int u, size_t *count, int case)
{
	char	*base;
	char	*l_base;
	char	*u_base;

	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	if (case)
		base = u_base;
	else
		base = l_base;
	if (u >= 16)
		put_hex(u / 16, count, case);
	ft_putchar(base[u % 16], count);
}
