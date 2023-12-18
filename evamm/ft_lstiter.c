/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:51:15 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/25 20:51:15 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
//     t_list *list1;
//     t_list *list2;

//     list1 = malloc(sizeof(t_list));
//     list2 = malloc(sizeof(t_list));

//     list1->content = "hello";
//     list1->next = list2;
//     list2->content = "hi";
//     list2->next = NULL;

//     t_list *lst = list1;

//     ft_lstiter(lst, print);
//     free(list1);
//     free(list2);
//     return (0);
// }