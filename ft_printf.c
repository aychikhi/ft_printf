/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:46:10 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/22 12:12:15 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fun(char format, va_list args, int a, int i)
{
	if (format == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		i = ft_putstr("0x") + ft_putptr(va_arg(args, unsigned long));
	else if (format == 'x' || format == 'X')
	{
		if (format == 'X')
			a = 1;
		i = ft_puthex(va_arg(args, unsigned int), a);
	}
	else if (format == 'u')
		i = ft_putuns(va_arg(args, unsigned int));
	else
		i = write(1, &format, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			i += fun(*format, args, a, i);
		}
		else if (*format != '%')
			i += write(1, format, 1);
		format++;
	}
	va_end(args);
	
	return (i);
}
