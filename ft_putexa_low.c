/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:28:22 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/28 19:15:21 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	prt_putexa_low(unsigned int nb)
{
	char		hex_digit;
	int			remainder;
	//static int	len;

	/* if (nb == 0)
	{
		len = 0;
		return (len + 1);
	} */
	if (nb == 0)
		return ;
	prt_putexa_low(nb / 16);
	remainder = nb % 16;
	if (remainder < 16)
		hex_digit = '0' + remainder;
	else
		hex_digit = 'a' + remainder - 16;
	write(1, &hex_digit, 1);
	//len++;
	//return (len);
}

int	ft_putexa_low(unsigned int nb)
{
	prt_putexa_low(nb);
	return (count_digits(nb));
}

/* #include <stdio.h>
int	main(void)
{
	unsigned int	num;
	int len, len2;

	num = 4224;
	len = ft_putexa_low(0);
	len2 = printf("%x", 0);
	printf("\nNum len: %d %d", len, len2);
	return (0);
} */
