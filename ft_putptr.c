/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:28:05 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/27 18:49:52 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putptr(void *ptr)
{
	uintptr_t address;

	ft_putstr("0x");
	address = (uintptr_t)ptr;
	ft_putexa_low(address);
}

/* #include <stdio.h>
int main() {
	int value = 200;
	void *ptr = &value;

	//printVoidPointer(ptr);
	printf("%p\n", ptr);
	ft_putptr(ptr);
	//printf("\n%x", -1);

	return 0;
} */