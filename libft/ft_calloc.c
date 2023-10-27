/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:59:27 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:52:28 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*allocated_memory;

	total_size = count * size;
	allocated_memory = malloc(total_size);
	if (allocated_memory != NULL)
		ft_bzero(allocated_memory, total_size);
	else
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (allocated_memory);
}
// int main(void)
// {
// size_t	count = 2;
// size_t	size = 2;

// printf("calloc = %s\n", calloc(count, size));
// printf("ft_calloc = %s\n", ft_calloc(count, size));
// }