/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_process.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:58:45 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/04 16:58:47 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>

void    ft_format_process(const char **format, t_format **table)
{
    if (ft_strncmp(*format, "c", 1) == 0)
        printf("\nOk c");
    if (ft_strncmp(*format, "s", 1) == 0)
        printf("\nOk s");
    if (ft_strncmp(*format, "p", 1) == 0)
        printf("\nOk p");
    if (ft_strncmp(*format, "d", 1) == 0)
        printf("\nOk d");
    if (ft_strncmp(*format, "i", 1) == 0)
        printf("\nOk i");
    if (ft_strncmp(*format, "u", 1) == 0)
        printf("\nOk u");
    if (ft_strncmp(*format, "x", 1) == 0)
        printf("\nOk x");
    if (ft_strncmp(*format, "X", 1) == 0)
        printf("\nOk X");
    if (ft_strncmp(*format, "%", 1) == 0)
        printf("\nOk %%");
    (*table)->total_length++;
}
