int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
	{
		char *str = "Adesso proprio non ci voleva.";
		int res = ft_strlen(str);
		printf("La lunghezza della stringa è: %d\n", res);
    	return 0;
	}
