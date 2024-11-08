/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:06:56 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*
// The  memchr()  function scans the initial n bytes 
// of the memory area pointed to by s for the first instance of c. 
// Both c and the bytes of the memory area pointed to by s 
// are interpreted as unsigned char.

#include <stdio.h>
#include <string.h>

int main() 
{
    //char test_str[] = "bonjourno"; 
    //int test_char = 'n'; 
	//size_t n = 2;

    char *result_ft = ft_memchr("bonjourno", 'n', 2);

    char *result_native = memchr("bonjourno", 'n', 2);

    printf("Résultat de ft_memchr : %s\n", result_ft);
    printf("Résultat de memchr : %s\n", result_native);
}
*/
