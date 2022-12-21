/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:40:20 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/15 16:02:55 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
// 	char	*str2 = "\xff\0\0\xaa\0\xde\x00MBS";
// 	char	*str3 = "aaaa";
// 	char	*str4 = "aaaa";
// 	char	*str5 = "aaaaaaa";
// 	char	*str6 = "=aaaaaa";

// 	printf("all chars: %d\n", ft_memcmp(str1, str2, 20));
// 	printf("all chars: %d\n", memcmp(str1, str2, 20));
// 	printf("more chars: %d\n", ft_memcmp(str1, str2, 10));
// 	printf("more chars: %d\n", memcmp(str1, str2, 10));
// 	printf("less chars: %d\n", ft_memcmp(str1, str2, 4));
// 	printf("less chars: %d\n", memcmp(str1, str2, 4));
// 	printf("no chars: %d\n", ft_memcmp(str1, str2, 0));
// 	printf("no chars: %d\n", memcmp(str1, str2, 0));

// 	printf("%d\n", ft_memcmp(str3, str4, 7));
// 	printf("%d\n", memcmp(str3, str4, 7));

// 	printf("%d\n", ft_memcmp(str5, str6, 7));
// 	printf("%d\n", memcmp(str5, str6, 7));

// 	return (0);
// }
