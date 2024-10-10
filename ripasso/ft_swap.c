void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int main(void)
{
	int primo = 4;
	int secondo = 6;
	printf("i numeri prima sono: a = %d, e b = %d. \n", primo, secondo);
	ft_swap(&primo, &secondo);
	 printf("i numeri prima dopo: a = %d, e b = %d. \n", primo, secondo);
	 return (0);
}
