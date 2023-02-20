/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:25:45 by mdoll             #+#    #+#             */
/*   Updated: 2023/02/20 13:10:17 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks if the current char is a "whitespace" and return 1 if true
static int	ft_checkwhitespaces(char *str, int i)
{
	if (str[i] == '\n' || str[i] == ' '
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		return (1);
	}
	else
		return (0);
}

// checks the first digit of the code. return 1 --> '-', 2 --> '+',
// -1 --> not a digit, 0 --> digit
static int	ft_checkfirstdigit(char *str, int i)
{
	if (str[i] == '-')
		return (1);
	else if (str[i] == '+')
		return (2);
	else if (str[i] > '9' || str[i] < '0')
		return (-1);
	else
		return (0);
}

// tackes a string and converts the string to a integer
long	ft_atoi(const char	*str)
{
	int		i;
	long	returnv;
	int		isnegative;
	char	*s;

	s = (char *) str;
	i = 0;
	returnv = 0;
	while (ft_checkwhitespaces(s, i))
		i++;
	isnegative = ft_checkfirstdigit(s, i);
	if (isnegative == -1)
		return (0);
	else if (isnegative == 1)
		i++;
	else if (isnegative == 2)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		returnv = returnv * 10 + str[i] - 48;
		i++;
	}
	if (isnegative == 1)
		returnv *= -1;
	return (returnv);
}
