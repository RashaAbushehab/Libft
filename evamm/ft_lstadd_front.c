/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:49:47 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/03 15:45:56 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *list1;
//     t_list *list2;
//     list1 = malloc(sizeof(t_list));
//     list2 = malloc(sizeof(t_list));

//     list1->content = "first list";
//     list2->content = "second list";
//     t_list *lst = list1;
//     ft_lstadd_front(&lst, list2);
//     t_list *new = lst;
//     while(new != NULL)
//     {
//         printf("new list content: %s\n", new->content);
//         new = new->next;
//     }
//     return (0);
// }
