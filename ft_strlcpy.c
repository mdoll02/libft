/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:42:17 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/18 15:56:05 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize >= 1)
	{
		while (--dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}

// int	main(void)
// {
// 	char src[] = "coucou";
// 	char dest[10]; 
// 	memset(dest, 'A', 10);

// 	// ft_strlcpy(dest, src, 2);
// 	ft_strlcpy(dest, src, -1);

// 	printf("%s\n", dest);
// }

// int	main(void)
// {
// 	char	dst[50] = "0001001 to this";
// 	char	src[50] = "Add this";
// 	char	dst2[50] = "0001001 to this";
// 	char	src2[50] = "Add this";

// 	printf("Dest: %s\n", dst);
// 	printf("Src: %s\n", src);
// 	printf("%lu\n", strlcpy(dst, "aaa", 0));
// 	printf("Dest: %s\n", dst);
// 	printf("Src: %s\n", src);

// 	printf("%lu\n", ft_strlcpy(dst2, "aaa", 0));
// 	printf("Dest: %s\n", dst2);
// 	printf("Src: %s\n", src2);

// 	return (0);
// }
