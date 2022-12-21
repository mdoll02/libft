/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:45:58 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/17 16:14:48 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findneedle(char	*hstck, char	*ndl, unsigned int i, size_t len);

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

int	ft_findneedle(char	*hstck, char	*ndl, unsigned int i, size_t len)
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

// int	main(void)
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     size_t max = strlen(s2);
//     char *i1 = strnstr(s1, s2, max);
//     char *i2 = ft_strnstr(s1, s2, max);

// 	printf("My result: %s	Should be: %s\n", i2 ,i1);
// }

// int	main(void)
// {
// 	char	*needle = "MZIRIBMZIRIBMZE123";
// 	char	*haystack = "MZIRIBMZE";
// 	// char	*haystack2 = "aaaatest";
// 	// char	*haystack3 = "testaaaaaaaaaaaaaa";
// 	// char	*haystack4 = "aaaaaaaaaaaaaa";
// 	// char	*haystack5 = "aaaaaaaaaatesaaaa";
// 	// char	*haystack6 = "";
// 	// char	*needle2 = "";

// 	printf("Test Case1: %s\n", strnstr(haystack, needle, strlen(haystack)));
// 	printf("Test Case1 my function: %s\n", ft_strnstr(haystack, needle, 18));
// }