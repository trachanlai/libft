/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:59:27 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 18:09:10 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	digit = '0' + n % 10;
	write(fd, &digit, 1);
}

// int main()
// {
//     int number1 = 12345;
//     int number2 = -6789;
//     int number3 = 0;

//     // Write number1 to standard output (usually your screen)
//     ft_putnbr_fd(number1, 1);

//     // Write number2 to standard error (usually your screen as well)
//     ft_putnbr_fd(number2, 2);
//     int customFileDescriptor = 0; 
//     ft_putnbr_fd(number3, customFileDescriptor);

//     return 0;  // Exit with a success code
// }
