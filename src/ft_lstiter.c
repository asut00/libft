/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:18:27 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 11:18:29 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
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

    printf("List:\n");
    ft_lstprint(elem1);

    // Application de la fonction print_content à chaque élément de la liste
    printf("\nElems content:\n");
    ft_lstiter(elem1, print_content);
}
*/