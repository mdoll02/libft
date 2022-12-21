/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:39:06 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/21 11:37:59 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_char(const char *s, char c)
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

int	ft_count(char const *s, size_t i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int				count_c;
	size_t			i;
	size_t			len;
	char			**sp_string;
	int				original_count_c;

	count_c = ft_count_char(s, c) + 1;
	i = 0;
	original_count_c = count_c;
	sp_string = malloc (sizeof(char *) * (count_c + 1));
	if (sp_string == NULL)
		return (NULL);
	while (count_c-- > 0)
	{
		i = ft_count(s, i, c);
		len = i;
		while (s[len] != c && s[len] != '\0')
			len++;
		*sp_string = ft_substr(s, i, len - i);
		sp_string++;
		i = len;
	}
	*sp_string = NULL;
	sp_string -= original_count_c;
	return (sp_string);
}

// int	main(void)
// {
// 	char	*str = "as          hj  dv   ad ";
// 	char	c = ' ';
// 	char	**rstring = ft_split(str, c);
// 	int		i;

// 	i = 0;
// 	printf("Inside main\n");
// 	while (rstring[i] != NULL)
// 	{
// 		if (i == 0)
// 			printf("While loop entered\n");
// 		printf("%s\n", rstring[i]);
// 		i++;
// 	}	
// 	return (0);
// }
