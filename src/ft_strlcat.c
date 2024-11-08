/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:11:15 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	destlen;

	destlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= destlen)
		return (ft_strlen(src) + dstsize);
	while (src[i] != '\0' && i < (dstsize - destlen - 1))
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}

/*
Concatenate two strings. Appends src to string dst 
of size siz (unlike strncat(), siz is the full size of
dst, not space left). At most siz-1 characters will be copied. 
Always NULL terminates (unless siz <=strlen(dst)).

Returns
	The strlcat() function returns 
	strlen(src) + MIN(siz, strlen(initial dst)). 
	If retval >= siz, truncation occurred.

Appends src to string dst of size siz (unlike strncat(), 
siz is the full size of dst, not space left). 
At most siz-1 characters will be copied. 
Always NULL terminates (unless siz <= strlen(dst)).
*/

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	srcnat[] = "ca va";
	//char	destnat[20] = "salut ";
	char	srcft[] = "ca va";
	char	destft[20] = "salut ";
	int n = 8;

	//printf("nat is : %zu\n", strlcat(destnat, srcnat, n));
	printf("ft_ is : %zu\n", ft_strlcat(destft, srcft, n));
	//printf("after function, nat dest is : %s\n", destnat);
	printf("after function, ft_ dest is : %s\n", destft);
}
*/
