/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:01:53 by egoncalv          #+#    #+#             */
/*   Updated: 2022/03/29 17:03:28 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\n My Length: %d\n", ft_printf("%s", NULL));
	printf("\n Printf Length: %d\n", printf("%s", NULL));
	return (0);
}
