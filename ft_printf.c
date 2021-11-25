/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:17:39 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 16:47:19 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		n_arg;
	void	val;

	n_arg = get_nargs(format);
	va_start(ap, format);
	for (int i = 0; i < n_arg; i++)
	{
		val = v_arg_dep(ap, )
	}
}


printf("hello world \n %d %d", 45, 45);