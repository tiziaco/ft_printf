/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:28:22 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/28 16:20:54 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putexa_low(unsigned int nb)
{
	char		hex_digit;
	int			remainder;
	int			temp;
	static int	len;

	if (nb == 0)
	{
		temp = len;
		len = 0;
		return (temp);
	}
	ft_putexa_low(nb / 16);
	remainder = nb % 16;
	if (remainder < 10)
		hex_digit = '0' + remainder;
	else
		hex_digit = 'a' + remainder - 10;
	write(1, &hex_digit, 1);
	len++;
	return (len);
}

/* #include <stdio.h>
int	main(void)
{
	unsigned int	num;
	int len;

	num = 4224;
	len = ft_putexa_low(num);
	printf("\nNum len: %d", len);
	return (0);
} */
