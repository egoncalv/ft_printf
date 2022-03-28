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

#include "../includes/libftprintf.h"
#include <stdio.h>

int	ft_print_unsigned(char	*str)
{
	int	length;

	if (ft_strncmp(str, "-", 1) == 0)
	{
		length = ft_strlen(str) - 1;
		write(1, str + 1, length);
	}
	else
	{	
		length = ft_strlen(str);
		write(1, str, length);
	}
	return (length);
}

int	ft_format_process(const char format, int count, va_list arguments)
{
	if (format == 'c')
		count += write(1, va_arg(arguments, char *), 1);
	else if (format == 's')
		count += ft_putstr_fd(va_arg(arguments, char *), 1);
	else if (format == 'p')
		printf("Ok");
	else if (format == 'd' || format == 'i')
		count += ft_putstr_fd(ft_itoa(va_arg(arguments, int)), 1);
	else if (format == 'u')
		count += ft_print_unsigned(ft_itoa(va_arg(arguments, int)));
	else if (format == 'x' || format == 'X')
		count += ft_convert_hex(va_arg(arguments, unsigned int), format);
	else if (format == '%')
		write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list		arguments;
	int			count;
	int			i;

	va_start(arguments, input);
	count = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			count += ft_format_process(input[i + 1], count, arguments);
			i++;
		}
		else
			count += write(1, &input[i], 1);
		i++;
	}
	va_end(arguments);
	return (count);
}
