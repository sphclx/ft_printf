/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 11:39:49 by abenton           #+#    #+#             */
/*   Updated: 2019/11/17 12:07:18 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_p(t_flags *flags, va_list args)
{
	char		*s;
	uintmax_t	num;

	num = (unsigned long)va_arg(args, unsigned long int);
	if (!(str = ft_itoa_base(num, 16)))
		exit(-1);
	if (tab->precision == 0 && num == 0)
		*str = '\0';

}
