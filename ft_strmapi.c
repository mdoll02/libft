/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:27:18 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/20 09:19:28 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// char	ft_changeascii(unsigned	int i, char c)
// {
// 	if (c + i < 126)
// 		c = c + i;
// 	else
// 		c = c + i - 93;
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str = "fkbeiugif";

// 	printf("%s\n", ft_strmapi(str, ft_changeascii));
// }
