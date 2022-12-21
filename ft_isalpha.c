/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:57:29 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/19 15:03:17 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	//ft_isalpha(150);

// 	char c;

// 	c = 'A';
//	printf("%d\n", isalpha(c));
// 	printf("FT :%d\n", ft_isalpha(c));

// 	c = 'a';
// 	printf("%d\n", isalpha(c));
// 	printf("FT :%d\n", ft_isalpha(c));

// 	c = '+';
// 	printf("%d\n", isalpha(c));
// 	printf("FT :%d\n", ft_isalpha(c));

// 	c = '^';
// 	printf("%d\n", isalpha(c));
// 	printf("FT :%d\n", ft_isalpha(c));

// 	return (0);
// }
