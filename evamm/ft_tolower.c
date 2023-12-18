/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:06:26 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:06:26 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		i += 32;
	return (i);
}

// int main(void)
// {
//     char c = 'H';
//     printf("%c\n", ft_tolower(c));
//     printf("%c\n", tolower(c));
// }