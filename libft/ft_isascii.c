/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:36:42 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:53:11 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = '*'; 
// 	printf("The result is %i\n", ft_isascii(c));
// 	printf("The result is %i\n", isascii(c));

// 	c = 'g';
// 	printf("The result is %i\n", ft_isascii(c));
// 	printf("The result is %i\n", isascii(c));

// 	c = '+';
// 	printf("The result is %i\n", ft_isascii(c));
// 	printf("The result is %i\n", isascii(c));
// 	return (0);
// }