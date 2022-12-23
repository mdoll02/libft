/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 09:58:23 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:04:29 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicates the string s1
char	*ft_strdup(const char *s1)
{
	char				*copystr;
	char				*str;
	unsigned int		i;

	str = (char *) s1;
	i = ft_strlen(s1);
	copystr = malloc(i * sizeof(char) + 1);
	if (copystr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copystr[i] = s1[i];
		i++;
	}
	copystr[i] = '\0';
	return (copystr);
}
