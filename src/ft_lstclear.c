/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:03:26 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 11:03:29 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (current_node)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}

/*
#include <stdio.h>
#include <string.h>

void del(void *content)
{
    free(content);
}

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
    t_list *elem1 = ft_lstnew(strdup("Element 1"));
    t_list *elem2 = ft_lstnew(strdup("Element 2"));
    t_list *elem3 = ft_lstnew(strdup("Element 3"));

    elem1->next = elem2;
    elem2->next = elem3;

    //t_list *list = elem2;

    printf("List before del :\n");
    ft_lstprint(elem1);

    ft_lstclear(&elem2, del);

    printf("List after:\n");
	printf("%s -> ", (char *)elem1->content);
	//printf("%s -> ", (char *)elem2->content);
}
*/
