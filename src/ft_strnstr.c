/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:12:31 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	mark;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			mark = i;
			while (haystack[i] == needle[j] && haystack[i] != '\0' && i < len)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[mark]);
			i = mark;
		}
		i++;
	}
	return (0);
}

/*
// The strnstr() function locates the first occurrence 
// of the null-terminated string needle in the string haystack, 
// where not more than len characters are searched

#include <stdio.h>
#include <string.h>

int main()
{
    char haystack[] = "hello worworld";
    char needle[] = "world";
    size_t len = 14;

    char *result_ft = ft_strnstr(haystack, needle, len);

    //char *result_native = strnstr(haystack, needle, len);

    printf("Résultat de ft_strnstr : %s\n", result_ft);
   // printf("Résultat de strnstr : %s\n", result_native);
}
*/
