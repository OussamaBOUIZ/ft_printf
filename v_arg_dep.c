/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_arg_dep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:23:11 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 21:30:42 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	v_arg_dep(va_list ap, char c)
{
	if (c == 'c')
		return va_arg(ap, char);
	if (c == 's')
		return va_arg(ap, char *);
	if (c == 'd' || c == 'x' || c == 'X')
		return va_arg(ap, int);
	if (c == 'u')
		return va_arg(ap, unsigned int);
	if (c == 'p')
		return va_arg(ap, void *);
	return ;
}