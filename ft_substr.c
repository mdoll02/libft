/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:44:34 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/19 11:45:09 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)malloc(len * sizeof(char) + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// int	main(void)
// {
// 	char	*str = "sad";
// 	size_t	size = 1;
// 	char	*rstring = ft_substr(str, -1, size);

// 	printf("%s\n", rstring);
// 	free(rstring);
// 	return (0);
// }
