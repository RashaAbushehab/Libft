/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:02 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:02 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char	*dest, const char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
		ft_strcpy(ptr, s);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "Hello World";
// 	result = strdup(str);
// 	printf("%s\n", result);
// 	result = ft_strdup(str);
// 	printf("%s\n", result);
// }