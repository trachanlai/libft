/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:04:52 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:52:49 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c;

// 	c = '*'; 
// 	printf("The result is %d\n", ft_isalpha(c));
// 	printf("The result is %i\n", isalpha(c));

// 	c = 'g';
// 	printf("The result is %i\n", ft_isalpha(c));
// 	printf("The result is %i\n", isalpha(c));

// 	c = '+';
// 	printf("The result is %d\n", ft_isalpha(c));
// 	printf("The result is %i\n", isalpha(c));
// 	return (0);
// }