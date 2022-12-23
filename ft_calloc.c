/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:49:50 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 09:59:35 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return a void * with size "size" and "count" amount of objects 
void	*ft_calloc(size_t count, size_t size)
{
	void			*returnp;

	returnp = malloc(size * count);
	if (returnp == NULL)
		return (NULL);
	ft_bzero(returnp, count * size);
	return (returnp);
}
