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

t_format	*ft_initialise(t_format *table)
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

void	ft_flag_process(char *flag, t_format *table)
{
	int	leading;

	leading = 0;
	while ((ft_isformat(*flag)))
	{
		if (flag == "#")
			table->alternate_form = 1;
		if (flag == "-")
			table->left_adjustment = 1;
		if (flag == "+")
			table->sign = 1;
		if (flag == " ")
			table->blank = 1;
		if (flag == "0" && leading == 0)
		{
			table->zero_padding = 1;
			leading == 1;
			flag++;
		}
		while (ft_isdigit(flag))
		{
			ft_memcpy(table->field_width, flag, 1);
			flag++;
		}
		flag++;
	}
}

int	ft_printf(const char *input, ...)
{
	va_list		arguments;
	t_format	*table;
	int			i;

	table = malloc(sizeof(t_format));
	if (!table)
		return (-1);
	ft_initialise(table);
	va_start(arguments, input);
	i = 0;
	while (input[i])
	{
		if (input[i] == "%")
		{
			ft_flag_process(input[++i], table);
			// Manage flags and/or conversions
		}
		else if (input[i] == 134)
		{
			// Manage escape sequences 
		}
		else
		{
			write(1, &input + i, 1);
			// Write ordinary characters
		}
		i++;
	}
	va_end(arguments);
}
