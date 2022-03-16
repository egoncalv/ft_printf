/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_digit_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 05:39:41 by egoncalv          #+#    #+#             */
/*   Updated: 2022/02/23 05:39:43 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf_bonus.h"

int	ft_convert_digit_string(const char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (!(ft_isdigit(str[i])))
		i++;
	j = i;
	while (ft_isdigit(str[j]))
		j++;
	tmp = malloc(sizeof(char) * j - i + 1);
	if (!tmp)
		return (0);
	j = 0;
	while (str[i])
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	return (ft_atoi(tmp));
}
