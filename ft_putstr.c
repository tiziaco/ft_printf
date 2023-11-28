/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:09:18 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/28 16:00:34 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char 	st;
	char	*string;
	
	st = "Hello";
	string = &st;
	//string = "Hello";
	ft_putstr(string);
	return (0);
}
*/
