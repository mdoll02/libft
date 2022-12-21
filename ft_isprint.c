/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:46:15 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/16 12:24:31 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 's';
// 	printf("%d\n", isprint(c));
// 	printf("FT: %d\n", ft_isprint(c));

// 	c = '*';
// 	printf("%d\n", isprint(c));
// 	printf("FT: %d\n", ft_isprint(c));

// 	c = ' ';
// 	printf("%d\n", isprint(c));
// 	printf("FT: %d\n", ft_isprint(c));

// 	c = '\n';
// 	printf("%d\n", isprint(c));
// 	printf("FT: %d\n", ft_isprint(c));

// 	c = 22;
// 	printf("%d\n", isprint(22));
// 	printf("FT: %d\n", ft_isprint(22));
// }
