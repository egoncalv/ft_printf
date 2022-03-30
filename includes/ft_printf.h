/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:47:17 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/29 18:39:10 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include "../libft/libft.h"

int			ft_printf(const char *input, ...);
int			ft_format_process(const char format, int count, va_list arguments);
int			ft_print_unsigned(char	*str);
int			ft_convert_hex(unsigned int nbr, char format);
int			ft_print_ptr(uintptr_t ptr);
int			ft_convert_ptr(uintptr_t ptr);

#endif
