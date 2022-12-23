/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:43:46 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:07:48 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// will check if the char is in set
static int	ft_character_in_set(char c, const char *set)
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

// will remove every character in set from the front and back from s1
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
		return (ft_strdup(""));
	while (ft_character_in_set(s1[iend - 1], set))
		iend--;
	rstring = malloc((iend - istart + 1) * sizeof(char));
	if (rstring == NULL)
		return (NULL);
	ft_strlcpy(rstring, &s1[istart], (iend - istart + 1));
	return (rstring);
}
