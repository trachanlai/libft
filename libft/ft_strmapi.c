/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:17:45 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:09:38 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	len = ft_strlen(s);
	i = 0;
	result = (char *) ft_calloc(len + 1, 1);
	if (s == NULL || f == NULL || result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result [i] = f(i, s[i]);
		i++;
	}
	return (result);
}
// char transform(unsigned int index, char character) {
//     // Example transformation function: converts lowercase to uppercase
//     if (character >= 'a' && character <= 'z') {
//         return character - 32; // Convert to uppercase
//     }
//     return character; // Keep other characters unchanged
// }

// int main() {
//     const char *input = "Hello, World!";
//     // Test your ft_strmapi function
//     char *result = ft_strmapi(input, transform);
//     if (result == NULL) {
//         printf("Error: ft_strmapi returned NULL\n");
//         return 1;
//     }

//     printf("Original String: %s\n", input);
//     printf("Transformed String: %s\n", result);

//     // Don't forget to free the result to prevent memory leaks
//     free(result);

//     return 0;
// }