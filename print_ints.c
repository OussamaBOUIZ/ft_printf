/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:38:34 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 10:12:49 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void	print_ints(int, ...);


int main(void)
{
	print_ints(4, 1,2,3);
	print_ints(2, 45, 65);
	print_ints(5, 1,2,3,4);
	return (0);
}

void	print_ints(int num, ...)
{
	va_list	arg;
	int	value;

	va_start(arg, num);
	for (int i = 0; i < num ; i++)
	{
		value = va_arg(arg, int);
		printf("%d : %d\n", i, value);
	}
	printf("\n");
}










