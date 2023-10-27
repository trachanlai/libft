/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:35:54 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:36:40 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
 The strdup = 'stringduplicate' function allocates sufficient memory for a 
 copy of the string s1, 
 does the copy, and returns a pointer to it.  
 The pointer may subsequently be used as an argument to the function free(3)

Return Value:
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
The strndup() function copies at most n characters from the string s1 always 
NUL terminating the copied string.

// important to note: 
strlen does not count \0 so '+1'is necessary here: 	
str_copy = malloc(ft_strlen (s1) + 1);
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_copy;
	size_t	i;

	i = 0;
	str_copy = ft_calloc(ft_strlen (s1) + 1, 1);
	if (str_copy == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str_copy[i] = s1[i];
		i++;
	}
	return (str_copy);
}
// int main(void)
// {
// const char *str = "this is a test";

// printf("strdup = %s\n", strdup(str));
// printf("ft_strdup = %s\n", ft_strdup(str));
// }