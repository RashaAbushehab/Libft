/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:05:40 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/16 19:51:55 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
//     t_list *list1;
//     list1 = malloc(sizeof(t_list));
//     list1->content = strdup("hello");
//     printf("contnet of list1: %s\n", (char *)list1->content);
//     ft_lstdelone(list1, del);
//     printf("contnet of list1: %s\n", (char *)list1->content);
//     return (0);

// }