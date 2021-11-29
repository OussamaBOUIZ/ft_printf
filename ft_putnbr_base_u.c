/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:43:12 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/29 18:06:54 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_u(unsigned long int u, size_t *count)
{
	char			*base;

	base = "0123456789abcdef";
	if (u >= 16)
		ft_putnbr_base_u(u / 16, count);
	ft_putchar(base[u % 16], count);
}
