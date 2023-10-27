/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:19:38 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:54:53 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned char	find_letter;
	size_t			i;

	str = (const char *)s;
	find_letter = (int)c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == find_letter)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (0);
}
// int  main(void)
// {
// char strdst[] = "123456789";
// int letter = '9';
// size_t len = 5;

// printf("memchr = %s\n", memchr(strdst, letter, len));
// printf("ft_memchr = %s\n", ft_memchr(strdst, letter, len));
// }