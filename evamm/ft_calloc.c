/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:14 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:14 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total;
	void	*ptr;

	if (size != 0 && SIZE_MAX / size < num)
	{
		return (NULL);
	}
	total = size * num;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// int main(void)
// {
//     size_t count = 5;
//     size_t size = sizeof(int);

//     int *arr = ft_calloc(count, size);

//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     size_t i;
//     i = 0;
//     while (i < count)
//     {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//         i++;
//     }
//     free(arr);
//     return 0;
// }
