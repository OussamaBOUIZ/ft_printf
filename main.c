/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:31:27 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/26 18:16:23 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int	main(void)
{
	int a = -4586;
	// printf("%u\n", -4568);
	// printf("%u\n", (unsigned int)a);
	ft_putnbr((unsigned int)a);
	return (0);
}

