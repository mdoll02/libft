/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:43:46 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/20 17:32:53 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_character_in_set(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*rstring;
	unsigned int		iend;
	unsigned int		istart;

	iend = ft_strlen(s1);
	istart = 0;
	if (s1 == NULL)
		return ("");
	while (s1[istart] && ft_character_in_set(s1[istart], set))
		istart++;
	if (istart == ft_strlen(s1))
		return ("");
	while (ft_character_in_set(s1[iend - 1], set))
		iend--;
	rstring = malloc((iend - istart + 1) * sizeof(char));
	if (rstring == NULL)
		return (NULL);
	ft_strlcpy(rstring, &s1[istart], (iend - istart + 1));
	return (rstring);
}

int	ft_character_in_set(char c, const char *set)
{
	int	indexset;

	indexset = 0;
	while (set[indexset])
	{
		if (set[indexset] == c)
			return (1);
		indexset++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "";
// 	char	*set = "";

// 	printf("%s\n", ft_strdup(str));
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
