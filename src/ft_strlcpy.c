/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:11:33 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*
Copy a string. Copy src to string dst of size siz. 
At most siz-1 characters will be copied. 
Always NULL terminates (unless siz == 0).

Returns
	The strlcpy() function returns strlen(src). 
	If retval >= siz, truncation occurred.

Copy src to string dst of size siz. 
At most siz-1 characters will be copied. 
Always NULL terminates (unless siz == 0).
*/

/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
	int	n = 5;

	char src[] = "zouu";
	char dst[100];
	printf("ft_ src is %s\n", src);
	printf("ft_ return is %zu\n", ft_strlcpy(dst, src, n));
	printf("ft_ dst is %s\n", dst);

	printf("\n");

	char dst2[100];
	printf("nat src is %s\n", src);
	printf("nat return is %zu\n", ft_strlcpy(dst2, src, n));
	printf("nat dst is %s\n", dst2);
}
*/
