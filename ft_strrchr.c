/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:37:16 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:07:34 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// will find the last occourence of (unsigned char) c in s
char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	uc;

	str = (char *) s;
	i = ft_strlen(s);
	uc = (unsigned char) c;
	while (i >= 0)
	{
		if (s[i] == uc)
			return (str + i);
		i--;
	}
	return (NULL);
}
