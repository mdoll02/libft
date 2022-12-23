/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:45:58 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:07:15 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// will check if needle can be found at the current position
static int	ft_findneedle(char *hstck, char	*ndl, unsigned int i, size_t len)
{
	int	j;

	j = 0;
	while (hstck[i] == ndl[j] && (hstck[i] || ndl[j]) && i < len)
	{
		i++;
		j++;
	}
	if (ndl[j] == '\0')
		return (1);
	else
		return (0);
}

// trys to find needle in haystack. if it finds the first character of needle
// in haystack the funcion calls ft_findneedle
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int		i;
	char				*hstck;
	char				*ndl;

	i = 0;
	hstck = (char *) haystack;
	ndl = (char *) needle;
	if (needle[i] == '\0')
		return (hstck);
	while (haystack[i] && i < len)
	{
		if (ft_findneedle(hstck, ndl, i, len) == 1)
			return (hstck + i);
		i++;
	}
	return (NULL);
}
