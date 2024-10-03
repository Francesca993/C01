/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:40:35 by fmontini          #+#    #+#             */
/*   Updated: 2024/10/03 14:41:59 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n'|| str[i] == '\r' || str[i] == '\f')
		{
			i++;
		}
		 if (str[i] == '+' || str[i] == '-')
                {
                          if (str[i] == '-' )
                         {
                                 sign *= -1;
                         }
                                 i++;
                }
		 if (str[i] >= '0' && str[i] <= '9')
		 {
			 result = result * 10 + (str[i] - '0');
		 }
		 i++;
	}
	return (result * sign);
}
#include <stdio.h>
int     main(int argc, char *argv[])
{
        if (argc == 2)
        {
                int num = ft_atoi(argv[1]);  // Converte l'argomento della riga di comando in numero
                printf("Numero convertito: %d\n", num);
        }
         else
    {
        printf("Utilizzo: %s <numero>\n", argv[0]);  // Messaggio di errore
    }

    return (0);
}

