/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:26:46 by abenton           #+#    #+#             */
/*   Updated: 2019/11/13 14:45:03 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *restrict format, ...)
{
	va_list args;
	int		ret;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ret = parse();
		}
		else
		{
			ft_putchar(*format);
			ret++;
		}
	}
	va_end(args);
	return (ret);
}
