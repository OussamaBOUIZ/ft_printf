/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:08 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 20:50:50 by obouizga         ###   ########.fr       */
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
void	ft_putnbr_base16(int nbr, int upper);
void	ft_putnbr(int nb);
void	ft_printf(const char *format, ...);
void	ft_treat(int val, char f);
void	ft_putnbr_u(int b);
void	ft_putnbr_base_u(long int nbr, int upper);

#endif