/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:35:14 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:52:39 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c;

// 	c = '*';
// 	printf("The result is %i\n", ft_isalnum(c));
// 	printf("The result is %i\n", isalnum(c));

// 	c = 'g';
// 	printf("The result is %i\n", ft_isalnum(c));
// 	printf("The result is %i\n", isalnum(c));

// 	c = '7';
// 	printf("The result is %i\n", ft_isalnum(c));
// 	printf("The result is %i\n", isalnum(c));
// 	return (0);
// }