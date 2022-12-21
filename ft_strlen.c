/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:24:57 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/18 15:51:21 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	printf("normal funktion: %d\n", strlen(&*argv[1]));
// 	printf("my funktion: %d\n", ft_strlen(&*argv[1]));

// 	return (0);
// }
