/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:39:39 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/03 16:04:53 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
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
//     list4->next = NULL;
//     int size = ft_lstsize(list1);

//     printf("number of lists: %d", size);
//     free(list1);
//     free(list2);
//     free(list3);
//     free(list4);

//     return (0);
// }