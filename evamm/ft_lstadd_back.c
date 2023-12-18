/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:04:26 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/16 22:01:08 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = &*new;
	}
	else
		*lst = new;
}

// #include <stdio.h>

// int main()
// {
//     t_list *list1;
//     t_list *list2;
// 	t_list *list3;
	
//     t_list *newlist;

//     newlist = malloc(sizeof(t_list));
//     list1 = malloc(sizeof(t_list));
//     list2 = malloc(sizeof(t_list));
// 	list3 = malloc(sizeof(t_list));

//     newlist->content = "new";
//     list1->content = "first list";
//     list2->content = "second list";
// 	list3->content = "list3";
//     t_list *lst = list1;
//     ft_lstadd_back(&lst, list3);
//     while(list3 != NULL)
//     {
//         printf("new list content: %s\n", list3->content);
//         list3 = list3->next;
//     }
//     return (0);
// }