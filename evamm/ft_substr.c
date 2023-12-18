/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:17 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:06:17 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
// int main(void)
// {
//     char str[] = "helloworld";
//     unsigned int start = 4;
//     size_t len = 5;
//     char *ptr;
//     ptr = ft_substr(str, start, len);

//     if(ptr == NULL)
//         printf("memory allocaiton failed");
//     if(ptr)
//         printf("substring is: %s", ptr);
//     return (0);        
// }