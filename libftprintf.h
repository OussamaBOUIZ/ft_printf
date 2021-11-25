/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:08 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 21:22:53 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(const char *str);
void	ft_putchar(char c);
int		isalpha_f(char c);
int		get_nargs(const char *s);
void	v_arg_dep(va_list ap, char c);
#endif