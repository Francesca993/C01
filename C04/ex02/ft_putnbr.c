#include <unistd.h>
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
		write (1, &nb, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write (1, &c, 1);
	}
}

int main(void)
{
	ft_putnbr(12345);  // Output: 12345
	write(1, "\n", 1);
	ft_putnbr(2147483647);  // Output: 2147483647 (INT_MAX)
	write(1, "\n", 1);
	ft_putnbr(-2147483648);  // Output: -2147483648 (INT_MIN)
	write(1, "\n", 1);
	return 0;
}
