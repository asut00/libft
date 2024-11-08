/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:09:30 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/*
// The strchr() function returns a pointer 
// to the first occurrence of the character c 
// in the string s.

#include <stdio.h>
#include <string.h>

int main() 
{
    char test_str[] = "tripouille";
    int test_char = ('t' + 256);

    char *result_ft = ft_strchr(test_str, test_char);

    char *result_native = strchr(test_str, test_char);

    printf("Résultat de ft_strchr : %s\n", result_ft);
    printf("Résultat de strchr : %s\n", result_native);
}
*/
