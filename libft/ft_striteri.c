/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:10:21 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:45:53 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// int main()
// {
//     char testString[] = "abcdef"; // A character array
//     printf("Original String: %s\n", testString);

//     // Apply the ft_striteri function with the modify_char_at_index function
//     ft_striteri(testString, &modify_char_at_index);
//     printf("Modified String: %s\n", testString);

//     return 0; // Exit with a success code
// }