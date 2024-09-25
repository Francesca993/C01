/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:01:44 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/24 15:55:59 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	process_char(char *str, int *counter)
{
	if (*str >= 'a' && *str <= 'z' && *counter == 0)
	{
		*str = *str - 32;
		(*counter)++;
	}
	else if ((*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
	{
		*str = *str;
		(*counter)++;
	}
	else if (!(*str >= 'a' && *str <= 'z'))
	{
		*counter = 0;
	}
	else
	{
		*str = *str;
	}
}

char	*ft_strupcase(char *str)
{
	char	*d;
	int		counter;

	counter = 0;
	d = str;
	while (*str)
	{
		process_char(str, &counter);
		str++;
	}
	return (d);
}
