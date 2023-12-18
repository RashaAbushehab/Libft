/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:36:18 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/16 14:17:42 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*lstclear_del(void *content)
{
	return (free(content), NULL);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *lst;
	if (!*lst || !del)
		return ;
	if (lst && del)
	{
		while (tmp)
		{
			next = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = next;
		}
	}
	*lst = NULL;
}

// int main(void)
// {
//     t_list *list1;
//     t_list *list2;
//     t_list *list3;
//     t_list *tmpp;

//     list1 = malloc(sizeof(t_list));
//     list2 = malloc(sizeof(t_list));
//     list3 = malloc(sizeof(t_list));

//     list1->content = strdup("hello");
//     list2->content = strdup("hi");
//     list3->content = strdup("hh");

//     list1->next = list2;
//     list2->next = list3;
//     list3->next = NULL;

//     tmpp = list1;
//     while(tmpp != NULL)
//     {
//         printf("content of lists: %s\n", (char *)tmpp->content);
//         tmpp=tmpp->next;
//     }
//     ft_lstclear(&list1, lstclear_del(list1->content));
//     tmpp = list1;
//     if(tmpp == NULL)
//     {
//         printf("list is clear\n");
//     }
//     else
//         printf("list is not clear\n");
//     return(0);

// }
