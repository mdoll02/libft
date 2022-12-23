/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:27:18 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:06:29 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ to each character of the string ’s’, and passing its
// index asfirst argument to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*istring;

	i = ft_strlen(s);
	istring = malloc(i * sizeof(char) + 1);
	if (istring == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		istring[i] = f(i, s[i]);
		i++;
	}
	istring[i] = '\0';
	return (istring);
}
