/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:56 by asuteau           #+#    #+#             */
/*   Updated: 2024/05/24 17:12:52 by asuteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	char_count(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	start = i;
	while (s1[i])
	{
		while (s1[i] && !(is_charset(s1[i], set)))
			i++;
		end = i;
		while (s1[i] && (is_charset(s1[i], set)))
			i++;
	}
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*res;
	int		i;
	int		j;

	if (!s1 || !*s1)
		return (ft_strdup(""));
	if (!set || !*set)
		return (ft_strdup(s1));
	len = char_count(s1, set);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	j = 0;
	while (j < len)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}

/*
// Allocates (with malloc(3)) and returns a copy of ’s1’ 
// with the characters specified in ’set’ removed from 
// the beginning and the end of the string.

#include <stdio.h>

void test(char const *s1, char const *set, char const *expected)
{
	printf("char_count for |%s| is %d\n", s1, char_count(s1, set));
	printf("resultat str is : |%s|\n", ft_strtrim(s1, set));
	printf("expected str is : |%s|\n\n\n", expected);
}

int	main(void)
{
	test("xxxhelloxxx", "x", "hello");
}
*/
