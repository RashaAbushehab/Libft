/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:10 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:03:10 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	while (count)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		count--;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "hello";
//     char str2[] = "hellO";
//     int result = ft_memcmp(str1, str2, sizeof(str1));
//     int result2 = memcmp(str1, str2, sizeof(str1));

//     if (result == 0)
//         printf("equal\n");
//     else if (result < 0)
//         printf("first is less than the second\n");    
//     else
//     printf("first more than the seocnd one\n");
//     if (result2 == 0)
//         printf("equal\n");
//     else if (result2 < 0)
//         printf("first is less than the second\n");    
//     else
//     printf("first more than the second one\n");
//     return (0);
// }