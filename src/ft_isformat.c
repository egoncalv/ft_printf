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

#include "libftprintf.h"

int	ft_isformat(char *ch)
{
	if (ch == "c" || ch == "s" || ch == "p" || ch == "d"
		|| ch == "i" || ch == "u" || ch == "x" || ch == "X" || ch == "%")
		return (1);
	else
		return (0);
}
