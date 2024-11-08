/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:41:23 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 09:41:25 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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

    t_list *list = NULL;

    ft_lstadd_back(&list, elem1);
    printf("Liste :\n");
    ft_lstprint(list);

    ft_lstadd_back(&list, elem2);
    printf("Liste :\n");
    ft_lstprint(list);

    ft_lstadd_back(&list, elem3);
    printf("Liste :\n");
    ft_lstprint(list);
}
*/