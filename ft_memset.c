/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:31:19 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/16 12:38:25 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*a;

	a = (char *) b;
	i = 0;
	while (i < len)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[] = "Test string gggtt";
// 	char str2[] = "Test string gggtt";
// 	printf("%s\n", str);
// 	memset(str, '\5', 17);
// 	printf("original funktions: %s\n", str);
// 	ft_memset(str2, '\5', 17);
// 	printf("My funktion:        %s\n", str2);

// 	return (0);
// }
// // use size_t or unsigned int?