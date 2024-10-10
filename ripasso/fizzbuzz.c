#include <unistd.h>

void write_number(int nb)
{
	char c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
	}

	else if (nb >= 10)
	{
	write_number(nb	/ 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	}
}

int main(void)
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (num % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if (num % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            write_number(num);
        }

        write(1, "\n", 1); // Stampa una nuova riga dopo ogni numero o parola
        num++;
    }
    return (0);
}
