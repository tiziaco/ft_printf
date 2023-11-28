/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:19:22 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/28 17:22:26 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_case(char c, va_list args, int *count)
{
	if (c == 'c')
		count += ft_putchr(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunbr(va_arg(args, int));
	else if (c == 'x')
		count += ft_putexa_low(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_putexa_low(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_putchr('%');
	else
		return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str != 0)
	{
		if (*str == '%')
		{
			print_case(*(str + 1), args, &count);
			str += 2;
		}
		else
		{
			ft_putchr(*str);
			str++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

int main(void)
{
	int len;
	int value = 200;
	void *ptr = &value;

	len = ft_printf("%c", '1');
	ft_printf("\nChar printed: %d\n\n", len);
	/* len = ft_printf("Test string: %s\n","yeee");
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test pointer: %p\n", ptr);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test integer: %i\n",21);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test decimal: %d\n",42);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test un int: %u\n",4242);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test hexa low: %x\n",4242);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test hexa up: %X\n",4242);
	ft_printf("Char printed: %d\n\n", len);
	len = ft_printf("Test pct: %%\n");
	ft_printf("Char printed: %d\n\n", len); */

	return (0);
}
