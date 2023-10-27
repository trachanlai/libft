/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:45:04 by tlai              #+#    #+#             */
/*   Updated: 2023/10/26 17:54:33 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Function name ft_itoa
- Prototype char *ft_itoa(int n);

- Parameters 
n: the integer to convert.
- Return value 
The string representing the integer.
NULL if the allocation fails.

- External functs. malloc
- Description 
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

#include "libft.h"
#include <limits.h>

static char	*ft_itoa_negative(int n)
{
	int				num_digits2;
	char			*output_str2;
	long long		temp2;
	int				n1;

	num_digits2 = 1;
	temp2 = (long long)n;
	while (temp2 / 10 != 0)
	{
		temp2 /= 10;
		num_digits2++;
	}
	output_str2 = (char *)ft_calloc(num_digits2 + 2, 1);
	if (output_str2 == NULL)
		return (NULL);
	output_str2[0] = '-';
	n1 = n * -1;
	while (num_digits2 > 0)
	{
		output_str2[num_digits2] = '0' + n1 % 10;
		n1 /= 10;
		num_digits2--;
	}
	return (output_str2);
}

char	*ft_itoa(int n)
{
	int				num_digits;
	char			*output_str;
	long long		temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num_digits = 1;
	temp = (long long)n;
	if (n < 0)
		return (ft_itoa_negative(n));
	while (temp / 10 != 0)
	{
		temp /= 10;
		num_digits++;
	}
	output_str = (char *)ft_calloc(num_digits + 1, 1);
	if (output_str == NULL)
		return (NULL);
	while (n >= 0 && num_digits > 0)
	{
		output_str[num_digits - 1] = '0' + n % 10;
		n /= 10;
		num_digits--;
	}
	return (output_str);
}
// int main(void)
// {
// int n = -10004;
// char *output = ft_itoa(n);

// printf("itoa = %s\n", output);
// }

// char	modify_based_on_index(unsigned int index, char c)
// {
//     return c + index;
// }