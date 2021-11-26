/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:43:12 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 20:36:45 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// int	valid_base(char *str)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	if (!str[i])
// 		return (0);
// 	while (str[i])
// 	{
// 		j = i + 1;
// 		while (str[j])
// 		{
// 			if (str[i] == str[j] || str[i] == '-' || str[i] == '+')
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

void	ft_putnbr_base16(int nbr, int upper)
{
	int		b_len;
	char 	*l_base;
	char 	*u_base;
	char	*base;

	b_len = 16;
	l_base = "0123456789abcdef";
	u_base = "0123456789ABCDEF";
	if (upper)
		base = u_base;
	else
		base = l_base;
	// if (nbr < 0)
	// {
	// 	ft_putchar('-');
	// 	nbr *= -1;
	// }
	if (nbr >= b_len)
		ft_putnbr_base16(nbr / b_len, upper);
	ft_putchar(base[nbr % b_len]);
}
