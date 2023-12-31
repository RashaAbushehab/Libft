/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:39 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:39 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     char *str = "hello";
//     printf("%zu\n", ft_strlen(str));
//     printf("%zu\n", strlen(str));
//     return (0);
// }