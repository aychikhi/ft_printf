/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:34:15 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/16 16:12:52 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_puthex(int n, int a);
int	ft_putchar(char c);
int	ft_putptr(unsigned long n);
int	ft_putstr(char *str);
int	ft_putuns(unsigned int i);
int	ft_printf(const char *format, ...);

#endif