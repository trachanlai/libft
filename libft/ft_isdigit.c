/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:20:30 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:53:34 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	int	c;

// 	c = '*';
// 	printf("The result is %d\n", ft_isdigit(c));
// 	printf("The result is %i\n", isdigit(c));

// 	c = '1';
// 	printf("The result is %i\n", ft_isdigit(c));
// 	printf("The result is %i\n", isdigit(c));

// 	c = 'a';
// 	printf("The result is %d\n", ft_isdigit(c));
// 	printf("The result is %i\n", isdigit(c));
// 	return (0);
// }