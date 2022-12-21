/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:07:19 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/14 12:09:17 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	chr;

	chr = (unsigned char) c;
	if ((chr >= '0' && chr <= '9') == 1)
		return (1);
	else if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) == 1)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = '0';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '9';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '5';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = 'a';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '?';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '0';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '9';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '5';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = 'a';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	c = '?';
// 	printf("%d\n", isalnum(c));
// 	printf("FT: %d\n", ft_isalnum(c));

// 	return (0);
// }