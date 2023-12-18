/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:12 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:06:12 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	len = (j - i) + 1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s1[i], len + 1);
	ptr[len] = '\0';
	return (ptr);
}

// int main(void)
// {
//     char str[] = "  \tHello, world!\t  ";
//     char set[] = " \t";
//     char *ptr;
//     ptr = ft_strtrim(str, set);

//     if (ptr == NULL)
//         printf("Memory allocation failed\n");
//     else
//         printf("Trimmed string: \"%s\"\n", ptr);

//     free(ptr);

//     return (0);
// }