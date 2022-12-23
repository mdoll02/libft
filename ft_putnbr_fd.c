/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:21:30 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:03:33 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// outputs the number n (integer) to filedesciptor fd
// 0 = standart input, 1 = standart output, 2 standart error
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n > 9)
			ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
