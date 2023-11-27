/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:19:22 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/27 18:50:28 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	print_case(char c, char str)
{
	if (c == 'c')
		ft_putchr(str);
	else if (c == 's')
		ft_putstr(str);
	else if (c == 'p')
		ft_putptr(str);
	else if (c == 'd')
		ft_putnbr(str);
	else
		return ;
}

int ft_printf(const char *, ...)
{
	
}

int main(void)
{
	ft_printf("Hello world");

	return (0);
}