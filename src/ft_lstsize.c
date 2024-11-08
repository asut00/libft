/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:17:06 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 10:17:09 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*voyager;

	if (!lst)
		return (0);
	count = 1;
	voyager = lst;
	while (voyager->next != NULL)
	{
		voyager = voyager->next;
		count++;
	}
	return (count);
}

/*
#include <stdio.h>

void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *elem1 = ft_lstnew("Element 1");
    t_list *elem2 = ft_lstnew("Element 2");
    t_list *elem3 = ft_lstnew("Element 3");

    elem1->next = elem2;
    elem2->next = elem3;

    printf("List :\n");
    ft_lstprint(elem1);

    int size = ft_lstsize(elem1);
    printf("list size : %d\n", size);
}
*/