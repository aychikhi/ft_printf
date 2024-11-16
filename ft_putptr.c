/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:08:32 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/16 16:20:20 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		i += ft_putptr(n / 16);
    i += ft_putchar((hex[n % 16]));
	return (i);
}
