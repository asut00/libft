/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:00:32 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char test[10] = "hello";
	ft_bzero(test, 1);
	printf("ft_ is : %s\n", test);
	printf("ft_[2] is : %c\n", test[1]);
	char test2[10] = "hello";
	bzero(test2, 1);
	printf("nat is : %s\n", test2);
	printf("nat[2] is : %c\n", test2[2]);
	for (size_t i = 0; i < 10; i++)
        printf("%d ", test2[i]);
}
*/
