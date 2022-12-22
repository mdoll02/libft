/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:21:30 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/21 14:01:18 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main (void)
// {
// 	ft_putnbr_fd(323429, 1);
// 	return (0);
// }
