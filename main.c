/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:31:27 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/29 20:44:07 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	main(void)
{
	
	int a = 7;
	int *pa = &a;
    
	char	*name = "oussama";
	// int p = ft_printf("I'm %d years old man and the curr year in hex is %x and this %c is a letter this num %s is unsigned\n", 21, 2021, 'A', name);
	// int d = printf("I'm %d years old man and the curr year in hex is %x and this %c is a letter this num %s is unsigned\n", 21, 2021, 'A', name);
	// printf("%d : %d\n", p, d);
	ft_printf("%p\n", pa);
	printf("%p\n", pa);
	return (0);
}

