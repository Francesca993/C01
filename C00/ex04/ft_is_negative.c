/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:08:21 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/23 14:56:44 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	v;

	if (n < 0)
	{
		v = 'N';
	}
	else
	{
		v = 'P';
	}
	write(1, &v, 1);
}
