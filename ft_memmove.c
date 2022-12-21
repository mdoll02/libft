/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:06:27 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/16 15:26:45 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = len - 1;
	if (dst == 0 && src == 0)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (0 <= i)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i--;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	str[30] = "Test String for Memmove";
// 	char	str2[30] = "Test String for Memmove";

// 	printf("Original Text: \t%s\n", str);
// 	printf("Source: \t%s\n", str + 4);
// 	printf("Destination: \t%s\n", str + 7);

// 	//printf("%s\n", ft_memmove(str + 7, str + 5, 10));
// 	ft_memmove(str + 7, str + 5, 17);
// 	printf("Result of my function: \t%s\n\n", str);

// 	printf("Original Text: \t%s\n", str2);
// 	printf("Source: \t%s\n", str2 + 4);
// 	printf("Destination: \t%s\n", str2 + 7);

// 	//printf("%s\n", memmove(str + 7, str + 5, 10));
// 	memmove(str + 7, str + 5, 17);
// 	printf("original funktion: \t%s\n", str2);
// }