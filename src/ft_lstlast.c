/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:26:18 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 10:26:19 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*voyager;

	if (!lst)
		return (NULL);
	voyager = lst;
	while (voyager->next != NULL)
		voyager = voyager->next;
	return (voyager);
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

    t_list *last = ft_lstlast(elem1);
	printf("Last elem : %s\n", (char *)last->content);
    return 0;
}
*/