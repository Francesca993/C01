/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:55:56 by fmontini          #+#    #+#             */
/*   Updated: 2024/10/08 15:56:00 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkdivisor(int nb, int divisor)
{
	if (divisor * divisor > nb)
	{
		return (1);
	}
	if (nb % divisor == 0)
	{
		return (0);
	}
	return (checkdivisor(nb, divisor +1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	return (checkdivisor(nb, 3));
}
