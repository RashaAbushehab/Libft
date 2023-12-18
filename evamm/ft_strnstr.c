/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:00 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:06:00 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0 && !haystack)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && \
				haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char src[] = "hello world";
//     char to_find[] = "wo";
//     int len = 13;
//     char *result = ft_strnstr(src, to_find, len);

//     if (result)
//         printf("Substring found: %s\n", result);
//     else
//         printf("Substring not found\n");

//     return 0;
// }

// int main()
// {

// 		char	*i1 = strnstr(NULL, "fake", 0);
// 		char	*i2 = ft_strnstr(NULL, "fake", 0);

// 	printf("%s\n", i1);
// 	printf("%s\n", i2);
// }