/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 04:33:07 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/30 03:49:10 by root             ###   ########.fr       */
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

int	ft_print_nbr(int nbr)
{
	char	*ptr;
	int		count;

	ptr = ft_itoa(nbr);
	count = ft_putstr(ptr);
	free(ptr);
	return (count);
}
