/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:03:33 by abenton           #+#    #+#             */
/*   Updated: 2019/11/14 14:06:39 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	print_o(t_printf *tab)
{
	unsigned int	num;

	if (ft_strcmp(tab->argument_flag, "hh") == 0)
		num = (unsigned char)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->argument_flag, "h") == 0)
		num = (unsigned short)(va_arg(tab->args, unsigned int));
	else if (ft_strcmp(tab->argument_flag, "ll") == 0)
		num = (unsigned long long)(va_arg(tab->args, unsigned long long int));
	else if (ft_strcmp(tab->argument_flag, "l") == 0)
		num = (unsigned long)(va_arg(tab->args, unsigned long int));
	else if (ft_strcmp(tab->argument_flag, "j") == 0)
		num = (uintmax_t)(va_arg(tab->args, uintmax_t));
	else if (ft_strcmp(tab->argument_flag, "z") == 0)
		num = (size_t)(va_arg(tab->args, size_t));
	else
		num = (unsigned int)(va_arg(tab->args, unsigned int));
	return (num);
}
