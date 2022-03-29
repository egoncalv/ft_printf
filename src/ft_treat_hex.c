/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:11:07 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/29 18:43:49 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_convert_hex(unsigned int nbr, char format)
{
	static int	count;
	if (nbr >= 16)
		ft_convert_hex(nbr / 16, format);
	if (format == 'x')
		count += ft_putchar_fd("0123456789abcdef"[nbr % 16], 1);
	if (format == 'X')
		count += ft_putchar_fd("0123456789ABCDEF"[nbr % 16], 1);
	return (count);
	}

int	ft_convert_ptr(uintptr_t ptr)
{
	static int	count;

	if (ptr >= 16)
		ft_convert_ptr(ptr / 16);
	return (count += ft_putchar_fd("0123456789abcdef"[ptr % 16], 1));
}
