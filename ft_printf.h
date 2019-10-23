/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:46:33 by abenton           #+#    #+#             */
/*   Updated: 2019/10/23 13:06:54 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h> // макросы для поддержания переменного числа аргументов

/*
 * Структура для флагов
 */

typedef struct	s_flags
{
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			hashh;
	int			width;
	int			precision;
	int			lenghtt;
}				t_flags

int		ft_printf(const char *restrict format, ...);

#endif
