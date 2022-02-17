/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:47:17 by egoncalv          #+#    #+#             */
/*   Updated: 2022/02/16 00:47:19 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct  s_format
{
    int alternate_form;
    int left_adjustment;
    int sign;
    int blank;
    int zero_padding;
    int field_width;
} t_format;

int	ft_printf(const char *, ...);

#endif