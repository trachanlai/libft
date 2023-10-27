/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:02:45 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:59:18 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main()
// {
// 	const char	s[] = "0123456789abc";

// 	printf("The length of the string is %lu.\n", ft_strlen(s));
// 	printf("The length of the string is %lu.\n", strlen(s));
// 	return (0);
// }