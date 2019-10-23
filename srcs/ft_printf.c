/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:26:46 by abenton           #+#    #+#             */
/*   Updated: 2019/10/23 13:12:30 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *restrict format, ...)
{
	va_list args;
	int		ret;
	char	*str;

	va_start(args, format);
	str = (char*)format;
	ret = kek(1, str, args, 0);
	va_end(args);
	return (ret);
}
