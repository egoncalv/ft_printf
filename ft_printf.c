/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:47:00 by egoncalv          #+#    #+#             */
/*   Updated: 2022/02/16 00:47:02 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_format    *ft_initialise(t_format *struct)
{
    struct->alternate_form = 0;
    struct->left_adjustment = 0;
    struct->sign = 0;
    struct->blank = 0;
    struct->zero_padding = 0;
    struct->field_width = 0;
    struct->total_length = 0;
    return (struct);
}

int	ft_printf(const char *format, ...)
{
	va_list     arguments;
    t_format    *struct;

    ft_initialise(struct);
    int     i;

    va_start(arguments, format);
    i = 0;
    while (format[i])
    {
        if (format[i] == "%")
        {
            // Manage flags and/or conversions
        }
        else if (format[i] == 134)
        {
            if ()
            // Manage escape sequences 
        }
        else
        {
            write(format[i], 1);
        }
        i++;
    }
    va_end(arguments);
}