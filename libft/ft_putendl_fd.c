/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:51:11 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:08:50 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
// int main()
// {
//     char *message1 = "1 is a message for standard output.";
//     char *message2 = "2 is an error message for standard error.";
//     char *message3 = "0 is a message for standard input";

//     // Write message1 to standard output (usually your screen)
//     ft_putendl_fd(message1, 1);

//     // Write message2 to standard error (usually your screen as well)
//     ft_putendl_fd(message2, 2);
//     int customFileDescriptor = 0;
//     ft_putendl_fd(message3, customFileDescriptor);

//     return 0;  // Exit with a success code
// }