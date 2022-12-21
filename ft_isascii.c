/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:21:49 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/14 12:09:33 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d\n", isascii(c));
// 	printf("FT: %d\n", ft_isascii(c));

// 	printf("%d\n", isascii(500));
// 	printf("FT: %d\n", ft_isascii(500));
// }
