/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:42 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/17 13:51:10 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "Hello";

// 	printf("%s\n", ft_memchr(str, 'o', 9));
// 	printf("%s\n", memchr(str, 'o', 9));
// }