/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:14:08 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/17 12:00:13 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*f_src;
	char	*f_dest;
	size_t	i;

	f_src = (char *) src;
	f_dest = (char *) dst;
	i = 0;
	if (f_src == NULL && f_dest == NULL)
		return (dst);
	while (i < n)
	{
		f_dest[i] = f_src[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[50] = "Hello";
// 	char dest[15] = "World";
// 	char src2[50] = "Hello";
// 	char dest2[15] = "World";

// 	printf("Both Strings before:\n Source: %s	", src);
// 	printf("Destination: %s\n", dest);
// 	//memcpy(dest, src, 20);
// 	printf("%s\n", dest);

// 	printf("Both Strings before:\n Source: %s	", src2);
// 	printf("Destination: %s\n", dest2);
// 	ft_memcpy(dest2, src2, 20);
// 	printf("%s\n", dest2);
// }
