/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:28:35 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/27 11:02:00 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 3)
		{
		printf("Utilizzo: %s <stringa> <numero_caratteri>\n", argv[0]);
		return 1;
	}
	char *src = argv[1];
	unsigned int num = (unsigned int)strtoul(argv[2], NULL, 10);
	char dest[num];

	ft_strncpy(dest, src, num);
	 printf("La stringa copiata è: %s.\nI caratteri totali sono: %u\n", dest, num);

	return 0;
}*/
