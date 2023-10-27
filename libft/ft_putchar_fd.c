/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:04:57 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:56:09 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
//     char letter = 'A';  // The character to write

//     // Write the letter 'A' to standard output (usually your screen)
//     ft_putchar_fd(letter, 1);

//     // Write the letter 'B' to standard error (usually your screen as well)
//     ft_putchar_fd('B', 2);

// 	ft_putchar_fd('C', 0);
//     return 0;  // Exit with a success code
// }