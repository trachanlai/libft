/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:10:58 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 12:07:09 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     char *strrchr(const char *s, int c);
- The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.
- The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.

Return Value:
The functions strchr() and strrchr() return a pointer to the 
located character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// int  main(void)
// {
//  char    str[] = "this is2 just a2 i test";
//  int     a = '2';

//  printf("strrchr = %s\n", strrchr(str, a));
//  printf("ft_strrchr = %s", ft_strrchr(str, a));
// //  return (0);
// }