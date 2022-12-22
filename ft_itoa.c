/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:21:25 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/22 11:26:54 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		len++;
	}
	while (n % 10 > 0 || n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_negative(int *n, char *str, int len)
{
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			str[len] = (-2147483648 % 10) * -1 + 48;
			*n = -2147483648 / 10;
			len--;
		}
		str[0] = '-';
		*n *= -1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*istring;

	len = ft_getlen(n);
	istring = ft_calloc(len + 1, sizeof(char));
	if (istring == NULL)
		return (NULL);
	len--;
	len = ft_negative(&n, istring, len);
	while (len >= 0 && istring[len] != '-')
	{
		istring[len] = n % 10 + 48;
		if (n % 10 == 0)
			istring[len] = 48;
		n /= 10;
		len--;
	}
	return (istring);
}

// #include "stdio.h"

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("Is: 		%s\n", ft_itoa(i));
// 	printf("Should be:	%d\n", i);
// 	printf("Length:		%lu\n", ft_strlen(ft_itoa(i)));
// 	return (0);
// }
