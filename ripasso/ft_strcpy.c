char *ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
#include <stdio.h>
int	main(void)
{
	char dest[50];
	char *stringa = "Avrei bisogno solo di una cosa";
	ft_strcpy(dest, stringa);
	printf("Stringa copiata: %s\n", dest);
	return (0);
}
