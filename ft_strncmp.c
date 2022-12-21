/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:57:28 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/17 12:54:27 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1 = "aaaaaab";
// 	char	*str2 = "aaaaaaa";
// 	char	*str3 = "aaaa";
// 	char	*str4 = "aaaa";

// 	printf("all chars: %d\n", ft_strncmp(str1, str2, 7));
// 	printf("all chars: %d\n", strncmp(str1, str2, 7));
// 	printf("more chars: %d\n", ft_strncmp(str1, str2, 10));
// 	printf("more chars: %d\n", strncmp(str1, str2, 10));
// 	printf("less chars: %d\n", ft_strncmp(str1, str2, 4));
// 	printf("less chars: %d\n", strncmp(str1, str2, 4));
// 	printf("no chars: %d\n", ft_strncmp(str1, str2, 0));
// 	printf("no chars: %d\n", strncmp(str1, str2, 0));

// 	printf("%d\n", ft_strncmp(str3, str4, 7));
// 	printf("%d\n", strncmp(str3, str4, 7));

// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("%d\n", strncmp("test\200", "test\0", 6));

// 	return (0);
// }
