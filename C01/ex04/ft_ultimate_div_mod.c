/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:29 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/24 13:16:38 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	if ( b != 0)
	{
		int div = *a / *b;
		int mod = *a % *b;

		*a = div;
		*b = mod;
	}
}
/*
int main(void)
{
    int a = 10;
    int b = 3;

    printf("Prima di ft_ultimate_div_mod: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);  // Passiamo gli indirizzi di a e b
    printf("Dopo ft_ultimate_div_mod: a (divisione) = %d, b (modulo) = %d\n", a, b);

    return 0;
}
*/
