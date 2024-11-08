/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:13:38 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
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

    int result_ft = ft_toupper(test_char);

    int result_native = toupper(test_char);

    printf("Résultat de ft_toupper : %c\n", (char)result_ft);
    printf("Résultat de toupper : %c\n", (char)result_native);
}
*/
