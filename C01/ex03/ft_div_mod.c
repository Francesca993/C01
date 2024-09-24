/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:54:12 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/24 13:10:26 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main(void)
{
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);  // Passiamo gli indirizzi di div e mod
    printf("Divisione: %d / %d = %d, Modulo: %d %% %d = %d\n",
    a, b, div, a, b, mod);

    return 0;
}
*/
