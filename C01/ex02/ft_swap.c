/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                 #+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:21 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/24 11:39:59 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	valtemporaneo;

	valtemporaneo = *a;
	*a = *b;
	*b = valtemporaneo;
}
/*
int	main(void)
{
	int a = 5;
	int b = 8;

	 printf("Prima di ft_swap: a = %d, b = %d\n", a, b);
   	ft_swap(&a, &b);  // Passa gli indirizzi di a e b
  	 printf("Dopo ft_swap: a = %d, b = %d\n", a, b);

    return 0;
}
*/
