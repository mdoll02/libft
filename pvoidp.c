/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pvoidp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:24:18 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/31 13:16:18 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	lenptradr(unsigned long long ptr)
{
	int	chars_printed;

	chars_printed = 0;
	if (ptr == 0)
		chars_printed++;
	while (ptr > 0)
	{
		ptr /= 16;
		chars_printed++;
	}
	return (chars_printed);
}

static void	tohex(unsigned int n)
{
	const char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write (1, &hex_digits[n], 1);
}

void	writevoidp(unsigned long long ptr)
{
	if (ptr >= 16)
		writevoidp(ptr / 16);
	tohex(ptr % 16);
}

int	pvoidp(unsigned long long ptr)
{
	write(1, "0x", 2);
	writevoidp(ptr);
	return (lenptradr(ptr) + 2);
}
