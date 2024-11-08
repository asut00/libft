/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:26:05 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/29 11:26:07 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_elem;
	t_list	*elem;
	void	*tmp_content;

	if (!lst || !f || !del)
		return (NULL);
	first_elem = NULL;
	while (lst)
	{
		tmp_content = f(lst->content);
		elem = ft_lstnew(tmp_content);
		if (!elem)
		{
			del(tmp_content);
			ft_lstclear(&first_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&first_elem, elem);
		lst = lst->next;
	}
	return (first_elem);
}

/*
#include <stdio.h>
#include <string.h>

void *duplicate_content(void *content)
{
    return strdup((char *)content);
}

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

    printf("Liste originale:\n");
    ft_lstprint(elem1);

    t_list *first_elem = ft_lstmap(elem1, duplicate_content, del);

    printf("\nNew list:\n");
    ft_lstprint(first_elem);
}
*/