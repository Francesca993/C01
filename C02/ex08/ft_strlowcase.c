/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:02:30 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 16:02:44 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char str1[] = "HELLO, WORLD!";
    char str2[] = "42IsTheAnswer";
    char str3[] = "TEST123!";
    char str4[] = ""; // Stringa vuota
    char str5[] = "MiXeD CaSe";

    printf("Original: %s | Lowercase: %s\n", str1, ft_strlowcase(str1));
    printf("Original: %s | Lowercase: %s\n", str2, ft_strlowcase(str2));
    printf("Original: %s | Lowercase: %s\n", str3, ft_strlowcase(str3));
    printf("Original: %s | Lowercase: %s\n", str4, ft_strlowcase(str4));
    printf("Original: %s | Lowercase: %s\n", str5, ft_strlowcase(str5));

    return 0;
}
*/
