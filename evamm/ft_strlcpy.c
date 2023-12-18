/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:34 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:34 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[6];
// 	src = "Hello world";
// 	size_t len = ft_strlcpy(dest, src, sizeof(src));
// 	printf("%s\n", src);
// 	// strlcpy(dest, src, 2);
// 	// printf("%s\n", dest);
// 	printf("%s\n", dest);
// 	printf("%d\n", len);
// }
