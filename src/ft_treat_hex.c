/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:11:07 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/24 21:11:07 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	ft_convert_hex(unsigned int nbr, char format)
{
	static int	count;

	if (nbr >= 16)
	{
		count++;
		ft_convert_hex(nbr / 16, format);
		ft_convert_hex(nbr % 16, format);
	}
	else
	{
		if (nbr >= 10)
		{
			if (format == 'x')
				ft_putchar_fd(nbr + 87, 1);
			else if (format == 'X')
				ft_putchar_fd(nbr + 55, 1);
		}
		else
			ft_putchar_fd(nbr + 48, 1);
	}
	return (count + 1);
}

int	ft_convert_ptr(uintptr_t ptr, char format)
{
	static int	count;
	
	if (ptr >= 16)
	{
		count++;
		ft_convert_ptr(ptr / 16, format);
		ft_convert_ptr(ptr % 16, format);
	}
	else
	{
		if (ptr >= 10)
		{
			if (format == 'x')
				ft_putchar_fd(ptr + 87, 1);
			else if (format == 'X')
				ft_putchar_fd(ptr + 55, 1);
		}
		else
			ft_putchar_fd(ptr + 48, 1);
	}
	return (count + 1);
}
