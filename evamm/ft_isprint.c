/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:52 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:52 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char c1 = 'H';
// 	char c2 = '\t';

// 	if (ft_isprint(c1))
// 		printf("%c is pritnable\n", c1);
// 	else
// 	printf("%c is not pritnable\n", c1);

// 	if (isprint(c1))
// 		printf("%c is pritnable\n", c1);
// 	else
// 	printf("%c is not pritnable\n", c1);
// }