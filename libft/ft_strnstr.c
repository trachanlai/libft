/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:48:04 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 12:02:10 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	segfault_paco[1];

	needle_len = ft_strlen(needle);
	if (haystack == NULL)
		segfault_paco[0] = haystack[len];
	if (*needle == '\0' || needle_len == 0)
		return ((char *) haystack);
	while (needle_len <= len && *haystack)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
// int  main(void)
// {
// // const char haystack[] = "Hello World";
// // const char needle[] = "World";
// // size_t len = 20;

//  //printf("strnstr = %s\n", strnstr(((void *)0), "fake", 3));
//  printf("ft_strnstr = %s", ft_strnstr((haystack, needle, len));
//  return (0);
// }