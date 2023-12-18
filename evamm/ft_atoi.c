/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:01:28 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:01:28 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					j;
	unsigned long long	value;

	j = 0;
	value = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i++] - 48);
		j++;
	}
	if (j > 19 || value >= 9223372036854775808ULL)
		return (-(sign == 1));
	return (value * sign);
}

// int	main(void)
// {
// 	char *str = "0012000034";
// 	printf("%d\n", ft_atoi(str));
//     printf("%d\n", atoi(str));
// 	return (0);
// }

// if(sign == 1)
// 	return -1;
//    else
// 	return 0;