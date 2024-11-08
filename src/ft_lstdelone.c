/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:48:28 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 10:48:30 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
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

    printf("List before:\n");
    ft_lstprint(elem1);

    ft_lstdelone(elem2, del);

    printf("List after del 'Element 2':\n");
    printf("%s -> ", (char *)elem1->content);
	printf("%s -> ", (char *)elem2->content);
    printf("%s -> ", (char *)elem3->content);
    printf("NULL\n");
}
*/