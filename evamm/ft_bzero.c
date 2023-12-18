/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:01:50 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:01:50 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset (str, 0, n);
}

// int main()
// {
// 	int array[] = {1,7,3,4,5};
// 	int i;

// 	while(i < 5)
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	ft_bzero(array, 7);
// 	i = 0;
// 	puts("\n\n");
// 	while(i < 5)
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	return (0);
// }
//     size_t i;

//     i = 0;
//     unsigned char *str2 = (unsigned char *)str;
//     while (i < n)
//     {
//         str2[i] = 0;
//         i++; 
//     }
// }