/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pdecint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:42:39 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/30 15:02:09 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	pdecint(int n)
{
	int	chars_printed;
	int	tmp;

	chars_printed = 0;
	tmp = n;
	if (tmp < 0)
	{
		tmp /= 10;
		tmp *= -1;
		chars_printed += 2;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		chars_printed++;
	}
	if (n == 0)
		chars_printed++;
	ft_putnbr_fd(n, 1);
	return (chars_printed);
}
