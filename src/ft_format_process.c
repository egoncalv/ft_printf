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

#include "../libftprintf.h"

void    ft_format_process(char *format, t_format *table)
{
    if (format == "c")
        printf("Ok c");
    if (format == "s")
        printf("Ok s");
    if (format == "p")
        printf("Ok p");
    if (format == "d")
        printf("Ok d");
    if (format == "i")
        printf("Ok i");
    if (format == "u")
        printf("Ok u");
    if (format == "x")
        printf("Ok x");
    if (format == "X")
        printf("Ok X");
    if (format == "%")
        printf("Ok %");
}