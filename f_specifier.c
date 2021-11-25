/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:47:53 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 17:20:01 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*f_specifier(const char *s)
{
	int	n_arg;
	char	*spec;
	int		i;

	i = 0;
	n_arg = get_nargs(s);
	spec = malloc(sizeof(char) * n_arg);
	while (*s)
	{
		if (*s == '%' && isalpha_f(*(s  + 1)))
			spec[i++] = *(s + 1);	
		s++;
	}
	spec[i] = 0;
	return (spec);
}


int main(void)
{
    char *name = f_specifier("%dfx4y%c%%x%p%x");
    while (*name)
    	printf("%c ", *(name++)); 
}