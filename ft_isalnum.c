/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:07:19 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/23 10:00:04 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ckecks if char is alpha-numeric
int	ft_isalnum(int c)
{
	unsigned char	chr;

	chr = (unsigned char) c;
	if ((chr >= '0' && chr <= '9') == 1)
		return (1);
	else if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) == 1)
		return (1);
	else
		return (0);
}
