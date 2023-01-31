/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pudec.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:28:55 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/30 15:53:09 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	lendecnbr(unsigned int n)
{
	unsigned int	tmp;
	int				chars_printed;

	tmp = n;
	chars_printed = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		chars_printed++;
	}
	if (n == 0)
		chars_printed++;
	return (chars_printed);
}

int	pudec(unsigned int n)
{
	if (n == 0)
		ft_putchar_fd('0', 1);
	else
	{
		if (n > 9)
			pudec(n / 10);
		ft_putchar_fd(n % 10 + 48, 1);
	}
	return (lendecnbr(n));
}
