/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phex.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:57:51 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/31 12:45:06 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static void	tohex(char x, unsigned int n)
{
	const char	*hex_digits;

	if (x == 'X')
		hex_digits = "0123456789ABCDEF";
	if (x == 'x')
		hex_digits = "0123456789abcdef";
	write (1, &hex_digits[n], 1);
}

static int	lenhexnbr(unsigned int n)
{
	unsigned int	tmp;
	int				chars_printed;

	tmp = n;
	chars_printed = 0;
	while (tmp > 0)
	{
		tmp /= 16;
		chars_printed++;
	}
	if (n == 0)
		chars_printed++;
	return (chars_printed);
}

int	phex(char x, unsigned int n)
{
	if (n >= 16)
		phex(x, n / 16);
	tohex(x, n % 16);
	return (lenhexnbr(n));
}
