/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:07:19 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ddst;
	char	*ssrc;

	if (!dst && !src)
		return (dst);
	i = 0;
	ddst = (char *)dst;
	ssrc = (char *)src;
	while (i < n)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return (dst);
}

/*
// The memcpy() function copies n bytes from memory 
// area src to memory area dest.

# include <string.h>
# include <stdio.h>

int main()
{
    char src[100] = "";
	printf("insert string : ");
	scanf("%s", src);
    char dest1[20];
    char dest2[20];

    ft_memcpy(dest1, src, strlen(src) + 1);

    memcpy(dest2, src, strlen(src) + 1);

    printf("Résultat de ft_memcpy: %s\n", dest1);
    printf("Résultat de memcpy: %s\n", dest2);
}
*/
