/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:47:17 by egoncalv          #+#    #+#             */
/*   Updated: 2022/02/16 00:47:19 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include "../libft/libft.h"

int			ft_printf(const char *input, ...);
int			ft_format_process(const char format, int count, va_list arguments);
int			ft_print_unsigned(char	*str);
int			ft_convert_hex(unsigned int nbr, char format);
int			ft_convert_ptr(uintptr_t ptr, char format);

#endif
