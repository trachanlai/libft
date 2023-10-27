/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:26:08 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:35:19 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' || *s == (char)c)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
//  int main () 
//  {
//     const char s[] = "this is a test to look for2rrr";
//     const char c = '2';

//     printf("ft_strchr is %s\n", ft_strchr(s, c));
// 	printf("strchr is %s\n", strchr(s, c));
//  return(0);
//  }
