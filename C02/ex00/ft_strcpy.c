/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:37:05 by fmontini          #+#    #+#             */
/*   Updated: 2024/09/27 11:40:21 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Utilizzo: %s <stringa>\n", argv[0]);
        	return 1;
	}
	char dest[100];
	char *src = argv[1];
	
	ft_strcpy(dest, src);
	 printf("La stringa copiata è: %s\n", dest);

	return 0;	
}
*/
