/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:00:48 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count < 0 || size < 0)
		return (NULL);
	if (count * size == 0)
	{
		mem = malloc(0);
		if (!mem)
			return (NULL);
		return (mem);
	}
	if (count > 2147483647 || size > 2147483647)
		return (NULL);
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (count * size));
	return (mem);
}

/*

// The calloc() function allocates memory for an array 
// of nmemb elements of size bytes each and returns a 
// pointer to  the  allocated memory. The memory is set to zero.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr1 = (int *)ft_calloc(count, size);

    for (size_t i = 0; i < count; i++)
        arr1[i] = i + 1;

    int *arr2 = (int *)calloc(count, size);

    for (size_t i = 0; i < count; i++)
        arr2[i] = i + 1;

    if (memcmp(arr1, arr2, count * size) == 0)
        printf("identiques\n");
    else
        printf("différents\n");
}
*/
