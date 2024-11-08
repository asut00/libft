/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:12:41 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[len]);
	while (0 <= len)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}

/*
// The strrchr() function returns a pointer 
// to the last occurrence of the character c 
// in the string s.

#include <stdio.h>
#include <string.h>

int main()
{
    char test_str[] = "hello world";
    int test_char = 'o';

    char *result_ft = ft_strrchr(test_str, test_char);

    char *result_native = strrchr(test_str, test_char);

    printf("Résultat de ft_strrchr : %s\n", result_ft);
    printf("Résultat de strrchr : %s\n", result_native);
}
*/
