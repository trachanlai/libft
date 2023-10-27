/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:34:31 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:55:17 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (s == 0 && d == 0)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int  main(void)
// {
// char strdst[] = "123456789";
// char strsrc[] = "abcdefghijklmno";
// size_t n = 5;

// printf("memcpy = %s\n", memcpy(strdst, strsrc, n));
// printf("ft_memcpy = %s\n", ft_memcpy(strdst, strsrc, n));
// }