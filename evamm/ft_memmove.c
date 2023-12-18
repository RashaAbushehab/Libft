/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:22 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:03:22 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = dest;
	src2 = (unsigned char *)src;
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	if (dest > src)
	{
		while (n--)
		{
			dest2[n] = src2[n];
		}
	}
	return (dest);
}

// int main()
// {
//     char str[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
//     printf("Original string :%s\n ", str);

//     // when overlap happens then it just ignore it
//     ft_memcpy(first + 8, first, 10);
//     printf("memcpy overlap : %s\n ", str);

//     // when overlap it start from first position
//     ft_memmove(second + 8, first, 10);
//     printf("memmove overlap : %s\n ", str);
//     return 0;
// }