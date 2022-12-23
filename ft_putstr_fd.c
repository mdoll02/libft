/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:02:30 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 09:33:50 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// outputs the string s to filedesciptor fd
// 0 = standart input, 1 = standart output, 2 standart error
void	ft_putstr_fd(char *s, int fd)
{
	if (*s)
	{
		ft_putchar_fd(*s, fd);
		ft_putstr_fd(s + 1, fd);
	}
}
