/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:20:24 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:04:07 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the first occourence of (unsiged char) c in s
char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	uc;

	str = (char *) s;
	i = 0;
	uc = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == uc)
			return (str + i);
		i++;
	}
	if (uc == '\0')
		return (str + i);
	return (NULL);
}
