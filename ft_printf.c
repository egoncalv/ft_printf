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

int	ft_printf(const char *format, ...)
{
	va_list arguments;
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
            // Manage escape sequences 
        }
        else
        {
            ft_putchar_fd(format[i], 1);
        }
        i++;
    }
    va_end(arguments);
}