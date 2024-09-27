/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:07:20 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/27 12:48:45 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return(1);
	}
	if((str[i] >= 65  && str[i] <= 90 )||(str[i] >= 97 && str[i] <= 122))
	{
		i++;
		return(0);
	} 
	else
	{
		return(1);
	}
	
}
int main() {
    // Esempi di utilizzo
    char *test1 = "Hello";
    char *test2 = "Hello123";
    char *test3 = "";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_alpha(test1)); // Dovrebbe restituire 1
    printf("Test 2: %s -> %d\n", test2, ft_str_is_alpha(test2)); // Dovrebbe restituire 0
    printf("Test 3: %s -> %d\n", test3, ft_str_is_alpha(test3)); // Dovrebbe restituire 1

    return 0;
}
