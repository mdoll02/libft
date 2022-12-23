/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:13:55 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 09:32:33 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// outputs string s to file decrsiptor fd followed by newline.
// 0 = standart input, 1 = standart output, 2 standart error
void	ft_putendl_fd(char *s, int fd)
{
	if (*s)
	{
		ft_putchar_fd(*s, fd);
		ft_putendl_fd(s + 1, fd);
	}
	else
		ft_putchar_fd('\n', fd);
}
