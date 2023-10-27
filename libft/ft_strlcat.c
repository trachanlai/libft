/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:06:04 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:32:49 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dest_len + 1)
		return (src_len + dstsize);
	if (dstsize > (dest_len + src_len))
		dstsize = dest_len + src_len + 1;
	i = 0;
	while (dest_len + i + 1 < dstsize)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main() 
// {
// 	char destination[] = NULL;
//     const char *source = "nyan !";

//     printf("strlcat: %lu\n", strlcat(destination, source, 2));
//     printf("ft_strlcat: %lu\n", ft_strlcat(destination, source, 5));
// }
