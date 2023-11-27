/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:28:22 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/27 18:39:28 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putexa_low(unsigned int nb)
{
	char	hex_digit;
	int		remainder;

	if (nb == 0)
		return ;
	ft_putexa_low(nb / 16);
	remainder = nb % 16;
	if (remainder < 10)
		hex_digit = '0' + remainder;
	else
		hex_digit = 'a' + remainder - 10;
	write(1, &hex_digit, 1);
}

/* #include <stdio.h>
int	main(void)
{
	unsigned int	num;

	num = 4224;
	ft_putexa_low(num);
	return (0);
} */
