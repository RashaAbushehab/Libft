/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:06 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:06:06 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + i);
	while (i != 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if (str[0] == (char)c)
		return ((char *)str);
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "hellohiraszrh";
// 	char c = 'r';

// 	char *found1 = ft_strrchr(str, c);
// 	char *found2 = strrchr(str, c);

// 	if (found1)
// 		printf("%s\n", found1);
// 	else
// 	printf("not found\n");

// 	if (found2)
// 		printf("%s\n", found2);
// 	else
// 	printf("not found\n");

// 	return (0);
// }