/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:07:41 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	if (!dst && !src)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 == dst2)
		return (dst);
	if (src2 < dst2)
	{
		while (len--)
			*(dst2 + len) = *(src2 + len);
		return (dst);
	}
	else
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}

/*
The  memmove()  function  copies  n bytes from memory area
 src to memory area dest.  The memory areas may overlap: 
 copying takes place as though the bytes in src are first 
 copied into a temporary array that does
 not overlap src or dest, and the bytes are 
 then copied from the temporary array to dest.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char src[] = "hello";
    char dst1[20];
    char dst2[20];
    size_t len = 6;

    ft_memmove(dst1, src, len);

    memmove(dst2, src, len);

    printf("Résultat de ft_memmove : |%s|\n", dst1);
    printf("Résultat de memmove : |%s|\n", dst2);
}
*/
