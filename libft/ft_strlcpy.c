/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:26:10 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:59:04 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main() 
// {
// 	char desti[30]; // Destination buffer
//     const char *source2 = "01234567"; // Source string

//     printf("strlcpy: %lu\n", ft_strlcpy(desti, source2, sizeof(desti)));
//     printf("ft_strlcpy: %lu\n", strlcpy(desti, source2, sizeof(desti)));
//     return (0);
// }