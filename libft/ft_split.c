/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:16:24 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:57:58 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substr(const char *s, char c)
{
	int	num_substr;
	int	i;

	i = 0;
	num_substr = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i +1] == '\0')))
			num_substr++;
		s++;
	}
	return (num_substr);
}

static char	**free_array(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		array[i] = NULL;
		i--;
	}
	free(array);
	array = NULL;
	return (NULL);
}

static char	*create_substr(const char *s, int substr_start, int end)
{
	int		j;
	char	*substring;

	j = 0;
	substring = ft_calloc((end - substr_start +1) * sizeof(char), 1);
	if (substring == NULL)
	{
		return (NULL);
	}
	while (substr_start < end)
	{
		substring[j] = s[substr_start];
		substr_start++;
		j++;
	}
	return (substring);
}

static char	**ft_split2(char **result, char const *s, char c, int num_substr)
{
	int		i;
	int		substr_start;
	int		substr_end;

	i = 0;
	substr_start = 0;
	while (i < num_substr)
	{
		while (s[substr_start] == c)
			substr_start++;
		substr_end = substr_start;
		while (s[substr_end] != c && s[substr_end] != '\0')
			substr_end++;
		result[i] = create_substr(s, substr_start, substr_end);
		if (result[i] == NULL)
			return (free_array(result, i));
		substr_start = substr_end;
		i++;
	}
	result[num_substr] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		num_substr;
	char	**result;

	num_substr = count_substr(s, c);
	result = (char **)ft_calloc((num_substr + 1) * sizeof(char *), 1);
	if (!result)
		return (NULL);
	result = ft_split2(result, s, c, num_substr);
	return (result);
}
// int main()
// {
//     const char *input_str = "hello!";
//     char delimiter = ' ';

//     char **result = ft_split(input_str, delimiter);

//     if (result)
//     {
//         for (int i = 0; result[i] != NULL; i++)
//         {
//             printf("Substring %d: '%s'\n", i, result[i]);
//             free(result[i]); // Free the memory allocated for each substring
//         }
//         free(result); // Free the array of substrings
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }