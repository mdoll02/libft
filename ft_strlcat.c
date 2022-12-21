/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:47:16 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/18 15:55:10 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dst_size;
	size_t	j;
	int		size;

	dst_size = ft_strlen(dst);
	j = 0;
	size = dst_size + ft_strlen(src);
	if (dst_size > destsize || destsize == 0)
		return (destsize + ft_strlen(src));
	while (dst_size < destsize - 1 && src[j])
	{
		dst[dst_size] = src[j];
		dst_size++;
		j++;
	}
	dst[dst_size] = '\0';
	return (size);
}

// int main(void)
// {
// 	char dst[20] = "9876543210";
// 	char src[10] = "0123456789";
// 	char dst2[20] = "9876543210";

// 	printf("%lu\n", ft_strlcat(dst, src, 100));
// 	printf("%s\n", dst);
// 	printf("%lu\n", ft_strlcat(dst2, "123", 0));
// 	printf("%s\n", dst2);
// 	return (0);
// }
