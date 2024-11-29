/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:41:29 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/18 11:30:26 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int a)
{
	char	*hex;
	int		i;

	hex = NULL;
	if (a == 0)
		hex = "0123456789abcdef";
	else if (a == 1)
		hex = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
		i += ft_puthex(n / 16, a);
	i += ft_putchar((hex[n % 16]));
	return (i);
}
