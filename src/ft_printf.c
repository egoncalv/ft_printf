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

void	ft_format_process(const char **format, va_list arguments)
{
	if (ft_strncmp(*format, "c", 1) == 0)
		write(1, va_arg(arguments, char *), 1);
	if (ft_strncmp(*format, "s", 1) == 0)
		//string
	if (ft_strncmp(*format, "p", 1) == 0)
		//pointer in hexadecimal
	if (ft_strncmp(*format, "d", 1) == 0)
		//decimal nbr
	if (ft_strncmp(*format, "i", 1) == 0)
		//integer
	if (ft_strncmp(*format, "u", 1) == 0)
		//unsigned decimal
	if (ft_strncmp(*format, "x", 1) == 0)
		//hexadecimal lowercase
	if (ft_strncmp(*format, "X", 1) == 0)
		//hexadecimal uppercase
	if (ft_strncmp(*format, "%", 1) == 0)
		write(1, "%", 1);
}


void	ft_read_and_write(const char *flag, va_list arguments)
{
	while (*flag)
	{
		if (ft_strncmp(flag, "%", 1) == 0)
		{
			flag++;
			ft_format_process(&flag, arguments);
		}
		else
			write(1, flag, 1);
		flag++;
	}
}

int	ft_printf(const char *input, ...)
{
	va_list		arguments;

	va_start(arguments, input);
	ft_read_and_write(input, arguments);
	va_end(arguments);
	return (1);
}
