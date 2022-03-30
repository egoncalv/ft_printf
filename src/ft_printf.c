/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:47:00 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/30 03:18:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_process(const char format, int count, va_list arguments)
{
	if (format == 'c')
		count += ft_putchar(va_arg(arguments, int));
	else if (format == 's')
		count += ft_putstr(va_arg(arguments, char *));
	else if (format == 'p')
		count += ft_convert_ptr(va_arg(arguments, unsigned long long));
	else if (format == 'd' || format == 'i')
		count += (va_arg(arguments, int));
	else if (format == 'u')
		count += ft_print_unsigned(ft_itoa(va_arg(arguments, unsigned int)));
	else if (format == 'x' || format == 'X')
		count += ft_convert_hex(va_arg(arguments, unsigned int), format);
	else if (format == '%')
		count += write(1, "%", 1);
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
			count = ft_format_process(input[i + 1], count, arguments);
			i++;
		}
		else
			count += write(1, &input[i], 1);
		i++;
	}
	va_end(arguments);
	return (count);
}
