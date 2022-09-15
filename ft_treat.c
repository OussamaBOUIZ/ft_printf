/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:47:00 by obouizga          #+#    #+#             */
/*   Updated: 2022/09/15 19:39:36 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treat(void *val, char f, size_t *count)
{
	if (f == 'c')
		ft_putchar(*(char *)val, count);
	else if (f == 'i' || f == 'd')
		ft_putnbr(*(int *)val, count);
	else if (f == 'x')
		put_hex(*(unsigned int *)val, count, 0);
	else if (f == 'X')
		put_hex(*(unsigned int *)val, count, 1);
	else if (f == 'u')
		put_hex(*(unsigned int *)val, count, 0);
	else if (f == 's')
		
	else if (f == 'p')
	{
		ft_putstr("0x", count);
		put_hex(*(unsigned int *)val, count, 0);
	}
}
