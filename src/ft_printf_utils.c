/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 04:33:07 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/30 04:33:53 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
		s = "(null)";
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

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
