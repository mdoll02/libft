/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:53:56 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 09:31:12 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// prints char c in file descriptor fd. 0 = standart input,
// 1 = standart output, 2 standart error
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
