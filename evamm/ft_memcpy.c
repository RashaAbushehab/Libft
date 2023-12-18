/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:15 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:03:15 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (!src2 && !dest2 && n)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// int main(void) 
// {
//     char source[] = "Hi";
//     char destination[10];

//     ft_memcpy(destination, source, strlen(source) + 1);

//     printf("%s\n", destination);
//     memcpy(destination, source, strlen(source) + 1);
//     printf("%s\n", destination);
//     return 0;
// }