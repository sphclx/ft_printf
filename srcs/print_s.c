/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:26:39 by abenton           #+#    #+#             */
/*   Updated: 2019/11/14 13:07:53 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	print_s(t_printf	*tab)
{
	char	*s;

	if (ft_strcmp(tab->flag, "l") == 0)
		s = (wchar_t *)va_arg(tab->args, wchar_t *);
	else
		s = (char *)va_arg(tb->args, char *);
	return (tab);
}
