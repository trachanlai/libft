/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:48:28 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 10:09:12 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n > 0)
	{
		*a = 0;
		a++;
		n--;
	}
}

// int  main(void)
// {
// char str[] = "this is just a2 i test";
// size_t n = 5;

// printf("bzero = %s\n", bzero(str, n));

// ft_zero(str,n);
// printf("ft_bzero = %s\n", str);
// }