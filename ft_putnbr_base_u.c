/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:43:12 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 21:36:12 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void	ft_putnbr_base_u(long int nbr, int upper)
{
	char 	*l_base;
	char 	*u_base;
	char	*base;
	unsigned int u;

	u = (unsigned int)nbr;
	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	if (upper)
		base = u_base;
	else
		base = l_base;
	if (u >= 16)
		ft_putnbr_base_u(u / 16, upper);
	ft_putchar(base[u % 16]);
}
