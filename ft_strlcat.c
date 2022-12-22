/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:47:16 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/22 14:07:03 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	len_dest;
	size_t	i;
	int		size;

	len_dest = ft_strlen(dst);
	i = 0;
	size = len_dest + ft_strlen(src);
	if (len_dest > destsize || destsize == 0)
		return (destsize + ft_strlen(src));
	while (len_dest < destsize - 1 && src[i])
	{
		dst[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dst[len_dest] = '\0';
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
