/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:41:29 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/17 17:29:21 by aychikhi         ###   ########.fr       */
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
// #include "ft_printf.h"

// int main() {

//     printf("%c", '0');
//     printf(" %c ", '0');
//     printf(" %c", '0' - 256);
//     printf("%c ", '0' + 256);
//     printf(" %c %c %c ", '0', 0, '1');
//     printf(" %c %c %c ", ' ', ' ', ' ');
//     printf(" %c %c %c ", '1', '2', '3');
//     printf(" %c %c %c ", '2', '1', 0);
//     printf(" %c %c %c ", 0, '1', '2');
//     printf("%%%s", "aymane");
//     printf ("\n");
//     ft_printf("%c", '0');
//     ft_printf(" %c ", '0');
//     ft_printf(" %c", '0' - 256);
//     ft_printf("%c ", '0' + 256);
//     ft_printf(" %c %c %c ", '0', 0, '1');
//     ft_printf(" %c %c %c ", ' ', ' ', ' ');
//     ft_printf(" %c %c %c ", '1', '2', '3');
//     ft_printf(" %c %c %c ", '2', '1', 0);
//     ft_printf(" %c %c %c ", 0, '1', '2');
//     ft_printf("\n%%%s", "aymane");
//     ft_printf("\n");
//     return 0;
// }