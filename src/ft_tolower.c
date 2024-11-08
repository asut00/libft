/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:13:31 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char test_char = 'a'; 
	printf("enter char : ");
	scanf("%c", &test_char);

    int result_ft = ft_tolower(test_char);

    int result_native = tolower(test_char);

    printf("Résultat de ft_tolower : %c\n", (char)result_ft);
    printf("Résultat de tolower : %c\n", (char)result_native);
}
*/
