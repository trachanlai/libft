/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:08:42 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:43:42 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str_joined;
	size_t		i;
	size_t		j;

	str_joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if ((s1 == NULL || s2 == NULL || str_joined == NULL))
		return (NULL);
	while (s1[i]!= '\0')
	{
		str_joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_joined[i + j] = s2[j];
		j++;
	}
	str_joined[i + j] = '\0';
	return (str_joined);
}
// int main(void)
// {
// char *str = "hjdgfs";
// char *str2 = "";
// printf("strjoin = %s\n", ft_strjoin(str, str2));
// }