/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:56:31 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 15:56:40 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char str1[] = "hello, world!";
    char str2[] = "42isTheAnswer";
    char str3[] = "test123!";
    char str4[] = ""; // Stringa vuota
    char str5[] = "MIXedCaSe";

    printf("Original: %s | Uppercase: %s\n", str1, ft_strupcase(str1));
    printf("Original: %s | Uppercase: %s\n", str2, ft_strupcase(str2));
    printf("Original: %s | Uppercase: %s\n", str3, ft_strupcase(str3));
    printf("Original: %s | Uppercase: %s\n", str4, ft_strupcase(str4));
    printf("Original: %s | Uppercase: %s\n", str5, ft_strupcase(str5));

    return 0;
}
*/
