/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_arg_trv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:29:00 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/25 10:23:15 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	first_arg_trv(const char *s)
{
	char	format;
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == '%' && isalpha_f(*(s + 1)))
		{
			ft_treat(*(s + 1));
			s++;
		}
		ft_putchar(*s);
		s++;
	}
}


printf("ljsldfjlj %c")