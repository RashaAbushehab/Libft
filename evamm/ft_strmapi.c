/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:44 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:44 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	convert_to_upper(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return (c - 'a' + 'A');
// 	}
// 	else
// 	{
// 		return (c);
// 	}
// 	(void)index;
// }

// int main(void)
// {
//     const char *str = "hello";

//     char *result;
//     result = ft_strmapi(str, convert_to_upper);

//     if(result)
//     {
//         printf("string after: %s", result);
//     }
//     else
//         printf("memory allocation failed.");
//     free(result);    
// }