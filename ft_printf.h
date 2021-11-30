/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:56:08 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/30 11:26:43 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(const char *str, size_t *count);
void	ft_putchar(char c, size_t *count);
int		isalpha_f(char c);
void	ft_putnbr_base16(int nbr, int upper, size_t *count);
void	ft_putnbr(int nb, size_t *count);
int		ft_printf(const char *format, ...);
void	ft_treat(int val, char f, size_t *count);
void	ft_putnbr_u(int b, size_t *count);
void	ft_putnbr_base_u(unsigned long int u, size_t *count);
void	putnbr_unsigned(unsigned int u, size_t *count, int upper);

#endif