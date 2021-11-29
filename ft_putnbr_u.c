/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:10:49 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/29 17:15:03 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(int b, size_t *count)
{
	unsigned int	u;

	u = (unsigned int) b;
	if (u >= 10)
	{
		ft_putnbr_u(u / 10, count);
	}
	ft_putchar(u % 10 + '0', count);
}
