/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:37:40 by abenton           #+#    #+#             */
/*   Updated: 2019/11/15 12:36:17 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_c(t_flags, va_list args)
{
	wint_t	c;

	if (flags->len == LEN_TYPE_L)
		c = (wint_t)va_arg(tab->args, wint_t);
	else
		c = (char)va_arg(tab->args, int);
	
}
