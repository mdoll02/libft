/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:31:19 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:03:14 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// set len bytes to (unsigend char) c in string b
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*a;
	unsigned char	uc;

	a = (char *) b;
	uc = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		a[i] = uc;
		i++;
	}
	return (b);
}
