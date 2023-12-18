/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:50 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:50 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)str2;
	ptr1 = (unsigned char *)str1;
	while ((*ptr1 || *ptr2) && n > 0)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
//     char *str1 = "1";
//     char *str2 = "";
//     int n = 42;

//     int result = ft_strncmp(str1, str2, n);
//     int result2 = strncmp(str1, str2, n);

//     if (result == 0)
//         printf("equal\n");
//     else if (result < 0)
//         printf("first is less\n");    
//     else
//     printf("first is more\n");
//     if (result2 == 0)
//         printf("equal\n");
//     else if (result2 < 0)
//         printf("first is less\n");    
//     else
//     printf("first is more\n");
//     // printf("%d", result2);
//     return (0);
// }