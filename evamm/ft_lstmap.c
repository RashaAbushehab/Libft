/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:00:12 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/25 21:00:12 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void print(void *content)
// {
//     printf("list content: %s", (char *)content);
// }

// static void lstmap_del(void *content)
// {
//     free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!del || !f || !lst)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
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

//     t_list *result = ft_lstmap(lst, print, del);
//     result = malloc(sizeof(t_list));
//     while (result)
//     {
//         printf("new list content: %s\n", (char *)result->content);
//         result = result->next;
//     }

//     ft_lstclear(&list1, del);

//     ft_lstclear(&result, del);

//     return (0);
// }
