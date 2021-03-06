/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:18:17 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/30 10:39:52 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	isalpha_f(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'\
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}
