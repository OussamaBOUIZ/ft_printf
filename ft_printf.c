/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:17:39 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 15:31:48 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		val;
	char	*str;

	va_start(ap, f);
	while (*f)
	{
		if (*f == '%' && isalpha_f(*(f + 1)))
		{
			if (*(f + 1) == 's')
			{
				str = va_arg(ap, char *);
				ft_putstr(str);
				f += 2;
			}
			else
			{
				val = va_arg(ap, int);
				ft_treat(val, *(f + 1));
				f += 2;
			}
		}
		ft_putchar(*f);
		f++;
	}
	va_end(ap);
}
