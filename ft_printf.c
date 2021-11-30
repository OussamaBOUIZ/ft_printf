/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:17:39 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/30 13:05:46 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	str_ptr_handle(const char *f, va_list ap, size_t *count)
{
	char				*str;
	unsigned long int	v;

	if (*(f + 1) == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			ft_putstr("(null)", count);
		else
			ft_putstr(str, count);
	}
	else if (*(f + 1) == 'p')
	{
		v = va_arg(ap, unsigned long int);
		ft_putstr("0x", count);
		ft_putnbr_base_u(v, count);
	}
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	size_t	count;

	count = 0;
	va_start(ap, f);
	while (*f)
	{
		if (*f == '%' && isalpha_f(*(f + 1)))
		{
			if ((*(f + 1)) == 'p' || (*(f + 1)) == 's')
				str_ptr_handle(f, ap, &count);
			else if (*(f + 1) == '%')
				ft_putchar(*(f + 1), &count);
			else
				ft_treat(va_arg(ap, int), *(f + 1), &count);
			f += 2;
		}
		if (!*f)
			break ;
		if (*f != '%')
			ft_putchar(*(f++), &count);
	}
	va_end(ap);
	return (count);
}
