/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:13:07 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:03:13 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
// int main() 
// {
//     char input = 'A';
//     char converted = ft_tolower(input);

//     printf("Original character: %c\n", input);
//     printf("Lowercase character: %c\n", converted);

//     return 0;
// }