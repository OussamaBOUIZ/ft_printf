/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:10:49 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 20:28:29 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_u(int b)
{
	unsigned int u;

	u = (unsigned int) b;
	if (u >= 10)
	{
		ft_putnbr_u(u / 10);
	}
	ft_putchar(u % 10 + '0');
}
