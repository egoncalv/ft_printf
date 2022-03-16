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

t_format	*ft_initialise(t_format *table)
{
	table->alternate_form = 0;
	table->left_adjustment = 0;
	table->sign = 0;
	table->blank = 0;
	table->zero_padding = 0;
	table->field_width = 0;
	table->precision = 0;
	table->total_length = 0;
	return (table);
}

void	ft_flag_process(const char **flag, t_format *table)
{
	while (**flag)
	{
		if (ft_strncmp(*flag, "#", 1) == 0)
			(*table).alternate_form = 1;
		if (ft_strncmp(*flag, "-", 1) == 0)
			(*table).left_adjustment = 1;
		if (ft_strncmp(*flag, "+", 1) == 0)
			(*table).sign = 1;
		if (ft_strncmp(*flag, " ", 1) == 0)
			(*table).blank = 1;
		if (ft_strncmp(*flag, "0", 1) == 0)
			(*table).zero_padding = 1;
		if (ft_isdigit(**flag))
			(*table).field_width = ft_convert_digit_string(*flag);
		while (ft_isdigit(**flag))
			*flag += 1;
		if (ft_strncmp(*flag, ".", 1) == 0)
			(*table).precision = ft_convert_digit_string(++*flag);
		while (ft_isdigit(**flag))
			*flag += 1;
		*flag += 1;
	}
	ft_format_process(flag, table);
}

void	ft_read_and_write(const char *flag, t_format **table)
{
	while (*flag)
	{
		if (ft_strncmp(flag, "%", 1) == 0)
		{
			flag++;
			ft_flag_process(&flag, table);
		}
		else
			(*table)->total_length += write(1, flag, 1);
		flag++;
	}
}

int	ft_printf(const char *input, ...)
{
	va_list		arguments;
	t_format	*table;

	table = malloc(sizeof(t_format));
	if (!table)
		return (-1);
	table = ft_initialise(table);
	va_start(arguments, input);
	ft_read_and_write(input, &table);
	va_end(arguments);
	return (1);
}
