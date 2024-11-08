/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:07:56 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*
// The  memset()  function fills the first n bytes of
// the memory area pointed to by s with the constant byte c.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    size_t size = 10;
    char *arr1 = malloc(size * sizeof(char));

    printf("Avant ft_memset : ");
    for (size_t i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    int value1 = 'a';
    ft_memset(arr1, value1, size * sizeof(char));

    printf("Après ft_memset avec la valeur %d : ", value1);
    for (size_t i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    char *arr2 = malloc(size * sizeof(char));

    printf("Avant memset : ");
    for (size_t i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    char value2 = 'a';
    memset(arr2, value2, size * sizeof(char));

    printf("Après natmemset avec la valeur %d : ", value2);
    for (size_t i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    printf("\n");
}
*/