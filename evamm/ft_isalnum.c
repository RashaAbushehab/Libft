/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:23 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:23 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isdigit(i) || ft_isalpha (i));
}

// int	main(void)
// {
// 	char c = 'z';
// 	char c2 = '\t';

// 	if(ft_isalnum(c))
// 		printf("%c in alnum\n", c);
// 	else
// 		printf("%c is not alnum\n", c);
// 	if(isalnum(c))
// 		printf("%c is alnum\n", c2);
// 	else
// 		printf("%c is not alnum\n", c2);	
// 	return (0);		
// }