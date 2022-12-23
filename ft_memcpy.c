/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:14:08 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:02:27 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies n bytes from src to dst. If they overlap behavior is undefined
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*f_src;
	char	*f_dest;
	size_t	i;

	f_src = (char *) src;
	f_dest = (char *) dst;
	i = 0;
	if (f_src == NULL && f_dest == NULL)
		return (dst);
	while (i < n)
	{
		f_dest[i] = f_src[i];
		i++;
	}
	return (dst);
}
