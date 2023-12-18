/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:43 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:43 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}

// int	main(void)
// {
// 	char i;

// 	i = '4';
// 	if(ft_isdigit(i))
// 		printf("%c is digit\n", i);
// 	else
// 		printf("%c not digit\n", i);
// 	if(isdigit(i))
// 		printf("%c is digit\n", i);
// 	else
// 		printf("%c not digit\n", i);
// 	return (0);	
// }