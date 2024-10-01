/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:06:55 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 15:09:47 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
/*
int main()
{
    char *test1 = "hello";
    char *test2 = "Hello";
    char *test3 = "world";
    char *test4 = "";
    char *test5 = "lowercase123";

    // Test case 1: Only lowercase characters
    if (ft_str_is_lowercase(test1))
        printf("Test 1: \"%s\" is lowercase.\n", test1);
    else
        printf("Test 1: \"%s\" is not lowercase.\n", test1);

    // Test case 2: Mixed uppercase and lowercase characters
    if (ft_str_is_lowercase(test2))
        printf("Test 2: \"%s\" is lowercase.\n", test2);
    else
        printf("Test 2: \"%s\" is not lowercase.\n", test2);

    // Test case 3: Another string with only lowercase characters
    if (ft_str_is_lowercase(test3))
        printf("Test 3: \"%s\" is lowercase.\n", test3);
    else
        printf("Test 3: \"%s\" is not lowercase.\n", test3);

    // Test case 4: Empty string
    if (ft_str_is_lowercase(test4))
        printf("Test 4: \"%s\" is lowercase.\n", test4);
    else
        printf("Test 4: \"%s\" is not lowercase.\n", test4);

    // Test case 5: String containing lowercase letters and numbers
    if (ft_str_is_lowercase(test5))
        printf("Test 5: \"%s\" is lowercase.\n", test5);
    else
        printf("Test 5: \"%s\" is not lowercase.\n", test5);

    return 0;
}
*/
