/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:47:16 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:05:42 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// appends string src to dst. appends at most dstsize - 1 characters and will
// NULL terminate the string if there is enough room. return the size.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	i;
	int		size;

	len_dest = ft_strlen(dst);
	i = 0;
	size = len_dest + ft_strlen(src);
	if (len_dest > dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (len_dest < dstsize - 1 && src[i])
	{
		dst[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dst[len_dest] = '\0';
	return (size);
}
