/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:27:53 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:06:13 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (d == s)
		return (dst);
	if (d > s)
	{
		d = d + len;
		s = s + len;
		while (len > 0)
		{
			d--;
			s--;
			*d = *s;
			len--;
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
// int  main(void)
// {
// char dst[] = "123456789";
// const char src[] = "abcdefghijklmno";
// size_t len = 5;

// printf("memmove = %s\n", memmove(dst, src, len));
// printf("ft_memmove = %s\n", ft_memmove(dst, src, len));
// }