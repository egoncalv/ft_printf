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
# include "libft/libft.h"

typedef struct s_format
{
	int	alternate_form;
	int	left_adjustment;
	int	sign;
	int	blank;
	int	zero_padding;
	int	field_width;
	int	precision;
	int	total_length;
}	t_format;

int			ft_printf(const char *input, ...);
t_format	*ft_initialise(t_format *table);
void		ft_flag_process(const char **flag, t_format *table);
int			ft_isformat(char *ch);
void		ft_read_and_write(const char *input, t_format **table);
int 		ft_convert_digit_string(const char *str);
void    	ft_format_process(char *format, t_format **table);

#endif
