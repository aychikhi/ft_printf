/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:34:15 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/17 17:35:16 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putuns(unsigned int i);
int	ft_putptr(unsigned long n);
int	ft_puthex(unsigned int n, int a);
int	ft_printf(const char *format, ...);

#endif