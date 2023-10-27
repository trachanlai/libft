/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:12:58 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 12:09:31 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str_trimmed;
	size_t		s1_len;
	size_t		ctr_start;
	size_t		ctr_end;
	size_t		i;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	ctr_start = 0;
	ctr_end = s1_len;
	while (s1[ctr_start] != '\0' && ft_strchr(set, s1[ctr_start]))
		ctr_start++;
	while (ctr_end > ctr_start && ft_strchr(set, s1[ctr_end - 1]))
		ctr_end--;
	str_trimmed = (char *)ft_calloc(ctr_end - ctr_start + 1, 1);
	if (str_trimmed == NULL)
		return (NULL);
	while (i < (ctr_end - ctr_start))
	{
		str_trimmed[i] = s1[ctr_start + i];
		i++;
	}
	return (str_trimmed);
}
// int main(void)
// {
// char *s1 = "abc34567357cba";
// char *set = "abc";
// char *output;

// output = ft_strtrim(str, setter);
// printf("strtrim = %s\n", output);
// }