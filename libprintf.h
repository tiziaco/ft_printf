/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:31:56 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/27 18:39:08 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

void	ft_putchr(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putexa_up(unsigned int nb);
void	ft_putexa_low(unsigned int nb);

#endif