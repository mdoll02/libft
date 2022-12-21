/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:49:50 by mdoll             #+#    #+#             */
/*   Updated: 2022/12/16 12:05:44 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*returnp;

	returnp = malloc(size * count);
	if (returnp == NULL)
		return (NULL);
	ft_bzero(returnp, count * size);
	return (returnp);
}

// int	main(void)
// {
// 	// int			*calloctest_int;
// 	// int			*ft_calloctest_int;
// 	char			*calloctest_char;
// 	char			*ft_calloctest_char;
// 	size_t			count;
// 	unsigned int	i;

// 	i = 0;
// 	count = 0;
// 	// calloctest_int = (int *) calloc(10, sizeof(int));
// 	// ft_calloctest_int = (int *) ft_calloc(10, sizeof(int));
// 	calloctest_char = (char *) calloc(count, sizeof(char));
// 	ft_calloctest_char = (char *) ft_calloc(count, sizeof(char));
// 	printf("Calloc int*: %s\n Ft_Calloc int*%s\n", 
//		calloctest_int, ft_calloctest_int);
// 	printf("Calloc char*: %s\nFt_Calloc char* %s\n", 
//		calloctest_char, ft_calloctest_char);
// 	while (i < count)
// 	{
// 		calloctest_char[i] = i + 48;
// 		ft_calloctest_char[i] = i + 48;
// 		i++;
// 	}
// 	printf("Calloc char*: %s\nFt_Calloc char* %s\n", 
//		calloctest_char, ft_calloctest_char);	
// 	free(calloctest_char);
// 	// free(calloctest_int);
// 	free(ft_calloctest_char);
// 	// free(ft_calloctest_int);

// 	return (0);
// }