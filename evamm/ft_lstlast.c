/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:51:54 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/03 16:00:48 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

// int main()
// {
//     t_list *list1;
//     t_list *list2;
//     t_list *list3;
//     t_list *list4;
//     list1 = malloc(sizeof(t_list));
//     list2 = malloc(sizeof(t_list));
//     list3 = malloc(sizeof(t_list));
//     list4 = malloc(sizeof(t_list));

//     list1->next = list2;
//     list2->next = list3;
//     list3->next = list4;
//     list4->content = "hello";
//     list4->next = NULL;

//     // ft_lstlast(l)->content == (void*)1
//     t_list *last = ft_lstlast(list1);
//     last->content = (void*)1;

//     printf("last list content: %s", last->content);
//     free(list1);
//     free(list2);
//     free(list3);
//     free(list4);

//     return (0);
// }