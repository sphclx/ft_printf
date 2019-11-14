/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:09:24 by abenton           #+#    #+#             */
/*   Updated: 2019/11/14 12:13:31 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static intmax_t     get_number(t_printf *tab)
{
	intmax_t    num;
   
// need to add va_list args to structure
	if (ft_strcmp(tab->len, "hh") == 0)
		num = (signed char)(va_arg(tab->args, int));
	else if (ft_strcmp(tab->len, "h") == 0)
		num = (short)(va_arg(tab->args, int))
	else if (ft_strcmp(tab->len, "ll") == 0)
		num = (long long)(va_arg(tab->args, long long int))
	else if (ft_strcmp(tab->len, "l") == 0)
		num = (long)(va_arg(tab->args, long int))
//  else if (ft_strcmp(tab->len, "j") == 0)
//      num = (intmax_t)(va_arg(tab->args, intmax_t));
//  else if (ft_strcmp(tab->len, "z") == 0)
//      num = (size_t)(va_arg(tab->args, size_t));
	else
		num = (int)(va_arg(tab->args, int));
	return (num);
}

t_printf            *print_d(t_printf *tab)
{
	intmax_t    num;

	num = get_number(tab);
	if (num == 0 && tab->precision == 0)
	{
//		just display gap
	}
// think about max number
// -9223372036854775808
//
	return (tab);
}
