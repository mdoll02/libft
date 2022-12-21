/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:58:34 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/18 15:54:39 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char	*str1 = "";
// 	char	*str2 = "2esv";

// 	printf("%s\n", ft_strjoin(str1, str2));
// 	printf("%d\n", ft_strlen(ft_strjoin(str1, str2)));
// }
