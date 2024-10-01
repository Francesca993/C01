/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:07:20 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 14:02:18 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main() 
{
    char str1[] = "HelloWorld";   // Stringa di test (solo lettere)
    char str2[] = "Hello123";     // Stringa di test (lettere e numeri)
    
    // Test della prima stringa
    if (ft_str_is_alpha(str1))
    {
        printf("La stringa '%s' è composta solo da lettere.\n", str1);
    }
    else
    {
        printf("La stringa '%s' contiene caratteri non alfabetici.\n", str1);
    }

    // Test della seconda stringa
    if (ft_str_is_alpha(str2))
    {
        printf("La stringa '%s' è composta solo da lettere.\n", str2);
    }
    else
    {
        printf("La stringa '%s' contiene caratteri non alfabetici.\n", str2);
    }

    return 0;  // Indica che il programma è terminato correttamente
}*/
