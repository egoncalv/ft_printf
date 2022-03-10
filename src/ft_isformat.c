/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 04:58:47 by egoncalv          #+#    #+#             */
/*   Updated: 2022/02/23 04:58:48 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_isformat(char *ch)
{
	if (ft_strncmp(ch, "c", 1) == 0 || ft_strncmp(ch, "s", 1) == 0
		|| ft_strncmp(ch, "p", 1) == 0 || ft_strncmp(ch, "d", 1) == 0
		|| ft_strncmp(ch, "i", 1) == 0 || ft_strncmp(ch, "u", 1) == 0
		|| ft_strncmp(ch, "x", 1) == 0
		|| ft_strncmp(ch, "X", 1) == 0 || ft_strncmp(ch, "%", 1) == 0)
		return (1);
	else
		return (0);
}
