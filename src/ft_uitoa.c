/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:20:58 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/30 15:29:08 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	count_nbr(unsigned int n)
{
	int		count;
	unsigned long	res;

	res = n;
	count = 1;
	if (res < 0)
	{
		count++;
		res *= (-1);
	}
	while (res >= 10)
	{
		count++;
		res /= 10;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	unsigned long	res;
	int				i;

	i = 0;
	str = (char *)malloc(sizeof(char) * count_nbr(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	res = n;
	if (res < 0)
		res *= (-1);
	str[count_nbr(n) - i++] = '\0';
	while (res >= 10)
	{
		str[count_nbr(n) - i++] = (res % 10) + '0';
		res /= 10;
	}
	str[count_nbr(n) - i++] = (res % 10) + '0';
	return (str);
}
