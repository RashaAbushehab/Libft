/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:28 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:28 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size && dest[i])
		i++;
	destlen = i;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (destlen < size)
		dest[i] = '\0';
	return (destlen + ft_strlen(src));
}

// int main(void)
// {
//     // char dest[20] = "Hello,";
//     // const char *src = "world!";

// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';

//     printf("Before: dest = \"%s\"\n", dest);
//     size_t result = ft_strlcat(dest, src, 6);
//     printf("After: dest = \"%s\", result = %ld\n", dest, result);

//     return 0;
// }
