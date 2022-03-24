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

int	ft_format_process(const char format, int count, va_list arguments)
{
	if (format == 'c')
		count += write(1, va_arg(arguments, char *), 1);
	else if (format == 's')
		count += ft_putstr_fd(va_arg(arguments, char *), 1);
	else if (format == 'p')
		printf("Ok");
		//pointer in hexadecimal
	else if (format == 'd')
		printf("Ok");
		//decimal nbr
	else if (format == 'i')
		count += ft_putstr_fd(ft_itoa(va_arg(arguments, int)), 1);
	else if (format == 'u')
		printf("Ok");
		//unsigned decimal
	else if (format == 'x')
		printf("Ok");
		//hexadecimal lowercase
	else if (format == 'X')
		printf("Ok");
		//hexadecimal uppercase
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
