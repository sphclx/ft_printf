/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:37:40 by abenton           #+#    #+#             */
/*   Updated: 2019/11/14 12:14:06 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*print_c(t_print *kek)
{
	int		c;

	if (ft_strcmp(tab->flag, "l") == 0)
		c = (wint_t)va_arg(tab->args, wint_t);
	else
		c = (char)va_arg(tab->args, int);
// flag handling
// output realization
	return (tab);
}
