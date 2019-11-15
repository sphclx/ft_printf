/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:26:39 by abenton           #+#    #+#             */
/*   Updated: 2019/11/15 14:46:54 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_s(t_flags	*flags)
{
	char	*s;
	int		i;
	int		len;

	if (flags->len == LEN_TYPE_L)
		s = (wchar_t *)s;
	else
		s = (char *)s;
	if (flags->precision > 0 && s)
		s =ft_strndup(flags->presicion, s);
	else if (flags->precision == 0 && s)
		s = ft_strdup(s);
	else if (flags->precision > 0 && !s)
		s = ft_strndup("(null)", flags->precision);
	else if (flags->precision == 0 && !s)
		s = ft_strdup("(null)");
	len = ft_strlen(s);
	flags->len += len;
	ft_putstr(s);
	return (flags);
}
