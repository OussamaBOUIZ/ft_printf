/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 06:22:30 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/29 17:14:31 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, size_t *count)
{	
	long int	b;

	b = nb;
	if (b < 0)
	{
		ft_putchar('-', count);
		b = b * (-1);
	}
	if (b >= 10)
	{
		ft_putnbr(b / 10, count);
	}
	ft_putchar(b % 10 + '0', count);
}
