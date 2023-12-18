/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:38 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:38 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}

// int	main (void)
// {
// 	char c1 = 'B';
// 	char c2 = 200;

// 	if (ft_isascii(c2))
// 		printf("%c is ascii character\n", c1);
// 	else
// 	printf("%c is not ascii character\n", c1);

// 	if (isascii(c2))
// 		printf("%c is ascii character\n", c1);
// 	else
// 	printf("%c is not ascii character\n", c1);
// }	