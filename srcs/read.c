/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:08:17 by abenton           #+#    #+#             */
/*   Updated: 2019/11/13 13:40:05 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Sets every flag to zero
 */

t_printf	set_flags_to_zero(t_printf *flags)
{	
	flags->precision = 0;
	flags->minus = 0;
	flags->plus = 0;
	flags->hashh = 0;
	flags->zero = 0;
	flags->space = 0;
	flags->width = 0;
	flags->lengthh = 0;
}

