#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9 && nb > 0)
	{
		nb = nb + '0';
		printf("stampo qui nb: %d\n",nb);
		write (1, &nb, 1);
	}
	else if (nb > 9)
	{
		printf("nb prima di putnbr: %d\n",nb);
		ft_putnbr(nb / 10);
		printf("nb dopo di putnbr: %d\n",nb);
		c = (nb % 10) + '0';
		write (1, &c, 1);
	}
}

int main(void)
{
	ft_putnbr(123);  // Output: 12345
	//write(1, "\n", 1);
	//ft_putnbr(2147483647);  // Output: 2147483647 (INT_MAX)
	//write(1, "\n", 1);
	//ft_putnbr(-2147483648);  // Output: -2147483648 (INT_MIN)
	//write(1, "\n", 1);
	return 0;
}
