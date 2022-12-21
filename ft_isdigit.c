/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:59:08 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/16 12:24:41 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = '0';
// 	printf("%d\n", isdigit(c));
// 	printf("FT: %d\n", ft_isdigit(c));

// 	c = '9';
// 	printf("%d\n", isdigit(c));
// 	printf("FT: %d\n", ft_isdigit(c));

// 	c = '5';
// 	printf("%d\n", isdigit(c));
// 	printf("FT: %d\n", ft_isdigit(c));

// 	c = 'a';
// 	printf("%d\n", isdigit(c));
// 	printf("FT: %d\n", ft_isdigit(c));

// 	c = '?';
// 	printf("%d\n", isdigit(c));
// 	printf("FT: %d\n", ft_isdigit(c));

// 	return (0);
// }
