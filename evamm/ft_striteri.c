/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:05:07 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:07 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
	s[i] = '\0';
}
// void print(unsigned int i, char *c)
// {
//     printf("character at index %u is: %c\n", i, *c);
// }

// int main(void)
// {
//     char str[] = "hello world";

//     ft_striteri(str, print);

//     return (0);
// }