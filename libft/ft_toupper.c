/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:55:10 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:03:23 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>

    int toupper(int c);
The toupper() function converts a lower-case letter to the corresponding
 upper-case letter.

Return Value:
If the argument is a lower-case letter, the toupper() function returns the
 corresponding upper-case letter if there is one;
     otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
// int main() 
// {
//     char input = 'a';
//     char converted = ft_toupper(input);

//     printf("Original character: %c\n", input);
//     printf("Uppercase character: %c\n", converted);

//     return 0;
// }
