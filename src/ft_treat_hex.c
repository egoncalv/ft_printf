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
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
 	if (nbr >= 16)
	{
		count++;
		ft_convert_hex(nbr / 16, format);
		ft_convert_hex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
	return (count + 1);
}
