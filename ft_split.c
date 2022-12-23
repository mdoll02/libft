/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:39:06 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:03:56 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// is countting how many strings should be created
static int	ft_count_char(const char *s, char c)
{
	unsigned int	i;
	int				count_c;

	i = 0;
	count_c = 0;
	while (s[i] == c && c != '\0')
		i++;
	if (s[i] == '\0')
		return (-1);
	while (s[i])
	{
		if (s[i] == c && i != 0)
		{
			count_c++;
			while (s[i] == c)
				i++;
			if (!s[i])
				count_c--;
		}
		else
			i++;
	}
	return (count_c);
}

// skips the delimiter char(s) in s and counts the lenght of the string
static void	ft_count(char const *s, char c, size_t *i_, size_t *len_)
{
	size_t	i;
	size_t	len;

	i = *i_;
	len = *len_;
	while (s[i] == c)
		i++;
	len = i;
	while (s[len] != c && s[len] != '\0')
		len++;
	*len_ = len;
	*i_ = i;
}

// free the array if there is an error while using substr
static char	**ft_free(char **sp_string)
{
	int	i;

	i = 0;
	while (sp_string[i])
	{
		free(sp_string[i]);
		i++;
	}
	free(sp_string);
	return (NULL);
}

// split the input string into multiple strings and 
// returns them in a array of strings
char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			len;
	char			**sp_string;
	int				index;

	index = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	sp_string = malloc (sizeof(char *) * (ft_count_char(s, c) + 2));
	if (sp_string == NULL)
		return (NULL);
	while (index < (ft_count_char(s, c) + 1))
	{
		ft_count(s, c, &i, &len);
		sp_string[index] = ft_substr(s, i, len - i);
		if (!sp_string[index])
			return (ft_free(sp_string));
		index++;
		i = len;
	}
	sp_string[index] = NULL;
	return (sp_string);
}
