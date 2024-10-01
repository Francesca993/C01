/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:37:22 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/30 16:09:52 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
    char *test1 = "Hello, World!";
    char *test2 = "Test\nNewLine"; // Contiene un carattere non stampabile '\n'
    char *test3 = "Printable123";
    char *test4 = ""; // Stringa vuota
    char *test5 = "This is a tab\t"; // Contiene un carattere non stampabile '\t'

    // Test caso 1: Solo caratteri stampabili
    if (ft_str_is_printable(test1))
        printf("Test 1: \"%s\" è completamente stampabile.\n", test1);
    else
        printf("Test 1: \"%s\" contiene caratteri non stampabili.\n", test1);

    // Test caso 2: Contiene un carattere non stampabile '\n'
    if (ft_str_is_printable(test2))
        printf("Test 2: \"%s\" è completamente stampabile.\n", test2);
    else
        printf("Test 2: \"%s\" contiene caratteri non stampabili.\n", test2);

    // Test caso 3: Solo caratteri stampabili
    if (ft_str_is_printable(test3))
        printf("Test 3: \"%s\" è completamente stampabile.\n", test3);
    else
        printf("Test 3: \"%s\" contiene caratteri non stampabili.\n", test3);

    // Test caso 4: Stringa vuota
    if (ft_str_is_printable(test4))
        printf("Test 4: \"%s\" è completamente stampabile.\n", test4);
    else
        printf("Test 4: \"%s\" contiene caratteri non stampabili.\n", test4);

    // Test caso 5: Contiene un carattere non stampabile '\t'
    if (ft_str_is_printable(test5))
        printf("Test 5: \"%s\" è completamente stampabile.\n", test5);
    else
        printf("Test 5: \"%s\" contiene caratteri non stampabili.\n", test5);

    return 0;
}
*/
