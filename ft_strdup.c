/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 09:58:23 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/19 16:20:21 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char	*str = "This string will be duped";

// 	printf("Original String: %s\n", str);
// 	char *str2 = ft_strdup(str);
// 	printf("Duped String: %s\n", str2);
// }		
