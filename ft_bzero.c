/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:59:02 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/17 11:51:19 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n > 0)
	{
		*str++ = '\0';
		n--;
	}
}

// int	main(void)
// {
// 	char str_bzero[] = "1122";
// 	char str2[] = "1122";

// 	//bzero(str_bzero, 0);
// 	ft_bzero(str2, 0);

// 	printf("original funktion: %s\n", str_bzero);
// 	printf("my funktion: %s\n", str2);
// }
