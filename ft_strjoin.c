/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:58:34 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:04:54 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// joins s1 and s2. returning the joined string
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*jstring;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	jstring = malloc(len * sizeof(char) + 1);
	if (jstring == NULL)
		return (NULL);
	len += 1;
	while (--len)
	{
		if (*s1)
			jstring[i] = *(char *)s1++;
		else
			jstring[i] = *(char *)s2++;
		i++;
	}
	jstring[i] = '\0';
	return (jstring);
}
