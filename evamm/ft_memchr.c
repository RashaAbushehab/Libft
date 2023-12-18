/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:04 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:03:04 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "hello";
// 	char c = 'z';
// 	int count = 13;

// 	char *result = ft_memchr(str, c, count);
// 	char *result2 = memchr(str, c, count);

// 	if (result)
// 		printf("%c found at %d\n", c, count);
// 	else
// 		printf("%c not found at %d\n", c, count);
// 	if (result2)
// 		printf("%c found at %d\n", c, count);
// 	else
// 		printf("%c  not found at %d\n", c, count);
// 	return (0);
// }
