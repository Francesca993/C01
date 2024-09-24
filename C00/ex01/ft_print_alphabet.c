/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:18:03 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/24 15:02:09 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lettera;

	lettera = 'a';
	while (lettera <= 'z')
	{
		write(1, &lettera, 1);
		lettera++;
	}
}
