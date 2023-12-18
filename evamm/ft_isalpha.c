/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:30 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:30 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char c;

// 	c = '5';

// 	if(ft_isalpha(c))
// 		printf("%c is alpha\n", c);
// 	else
// 		printf("%c not alpha\n", c);
// 	if(isalpha(c))
// 		printf("%c is alpha\n", c);
// 	else
// 		printf("%c not alpha\n", c);
// 	return (0);
// }