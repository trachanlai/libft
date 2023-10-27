/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:49:25 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:53:45 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c;

// 	c = '~';
// 	printf("The result is %d\n", ft_isprint(c));
// 	printf("The result is %i\n", isprint(c));

// 	c = 'g';
// 	printf("The result is %i\n", ft_isprint(c));
// 	printf("The result is %i\n", isprint(c));

// 	c = ' ';
// 	printf("The result is %d\n", ft_isprint(c));
// 	printf("The result is %i\n", isprint(c));
// 	return (0);
// }