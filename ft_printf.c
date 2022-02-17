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

t_format    *ft_initialise(t_format *table)
{
    table->alternate_form = 0;
    table->left_adjustment = 0;
    table->sign = 0;
    table->blank = 0;
    table->zero_padding = 0;
    table->field_width = 0;
    table->total_length = 0;
    return (table);
}

void flag_process(char   *flag, t_format *table)
{
        if (flag == "#")
            table->alternate_form = 1;
        if (flag == "-")
            table->left_adjustment = 1;
        if (flag == "+")
            table->sign = 1;
        if (flag == " ")
            table->blank = 1;
        if (flag == "0")
            table->zero_padding = 1;
        flag++;
        if (flag == "#" || flag == "-" || flag || "+" && flag || " " || flag == "0")
            flag_process(*flag);
}

int	ft_printf(const char *format, ...)
{
	va_list     arguments;
    t_format    *table;
    int     i;
    
    table = malloc(sizeof(t_format));
    if (!table)
        return (-1);
    ft_initialise(table);
    va_start(arguments, format);
    i = 0;
    while (format[i])
    {
        if (format[i] == "%")
        {
            flag_process(format[i + 1], table);
            // Manage flags and/or conversions
        }
        else if (format[i] == 134)
        {
            if ()
            // Manage escape sequences 
        }
        else
        {
            write(1, &format + i, 1);
        }
        i++;
    }
    va_end(arguments);
}