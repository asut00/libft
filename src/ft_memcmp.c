/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:07:08 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*

// The memcmp() function returns an integer less than, 
// equal to, or greater than zero if the first n bytes of  
// s1 is found, respectively, to be less than, to match,
// or be greater than the first n bytes of s2.

#include <stdio.h>
#include <string.h>

int main() 
{
	char s2[] = "hello";
	char s3[] = "hell!";
    size_t n = 8;

    int result_ft = ft_memcmp(s2, s3, n);

    int result_native = memcmp(s2, s3, n);

    printf("Résultat de ft_memcmp : %d\n", result_ft);
    printf("Résultat de memcmp : %d\n", result_native);
}
*/
