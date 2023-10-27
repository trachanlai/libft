/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:52:58 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:55:48 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len > 0)
	{
		*a = c;
		a++;
		len--;
	}
	return (b);
}
// int  main(void)
// {
// char str[] = "this is just a2 i test";
// char d = '0';
// size_t len = ft_strlen(str);

//  printf("memset = %s\n", memset(str, d, len));
//  printf("ft_memset = %s\n", ft_memset(str, d, len));
//  return (0);
// }
