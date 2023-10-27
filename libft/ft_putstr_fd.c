/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:35:10 by tlai              #+#    #+#             */
/*   Updated: 2023/10/27 11:28:12 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Function name ft_putstr_fd
- Prototype void ft_putstr_fd(char *s, int fd);

- Parameters 
s: The string to output.
fd: The file descriptor on which to write.

- Return value None
- External functs. write
- Description 
Outputs the string ’s’ to the given file
descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

// int main()
// {
//     char *message1 = "1 is a message for standard output.";
//     char *message2 = "2 is an error message for standard error.";
//     char *message3 = "0 is a message for standard input";

//     // Write message1 to standard output (usually your screen)
//     ft_putstr_fd(message1, 1);

//     // Write message2 to standard error (usually your screen as well)
//     ft_putstr_fd(message2, 2);
//     int customFileDescriptor = 0;  
//     ft_putstr_fd(message3, customFileDescriptor);

//     return 0;  // Exit with a success code
// }