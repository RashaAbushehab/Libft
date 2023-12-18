/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:15 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:15 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		ptr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		ptr[j++] = s2[i++];
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char str1[] = "hello";
// 	char *str2 = NULL;
// 	char *ptr;
// 	ptr = ft_strjoin(str1, str2);
// 	if(ptr == NULL)
// 		printf("memory allocaiton failed\n");
// 	if(ptr)
// 	{
// 		printf("joined string: %s\n", ptr);
// 	}	
// 	return (0);
// }