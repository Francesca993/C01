/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:09:10 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:22 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
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
    char *test1 = "12345";
    char *test2 = "123a45";
    char *test3 = "00789";
    char *test4 = "";
    char *test5 = "123 456";

    // Test case 1: Only numeric characters
    if (ft_str_is_numeric(test1))
        printf("Test 1: \"%s\" is numeric.\n", test1);
    else
        printf("Test 1: \"%s\" is not numeric.\n", test1);

    // Test case 2: Contains a non-numeric character
    if (ft_str_is_numeric(test2))
        printf("Test 2: \"%s\" is numeric.\n", test2);
    else
        printf("Test 2: \"%s\" is not numeric.\n", test2);

    // Test case 3: Numeric characters with leading zeros
    if (ft_str_is_numeric(test3))
        printf("Test 3: \"%s\" is numeric.\n", test3);
    else
        printf("Test 3: \"%s\" is not numeric.\n", test3);

    // Test case 4: Empty string
    if (ft_str_is_numeric(test4))
        printf("Test 4: \"%s\" is numeric.\n", test4);
    else
        printf("Test 4: \"%s\" is not numeric.\n", test4);

    // Test case 5: Numeric characters with a space
    if (ft_str_is_numeric(test5))
        printf("Test 5: \"%s\" is numeric.\n", test5);
    else
        printf("Test 5: \"%s\" is not numeric.\n", test5);

    return 0;
}
*/
