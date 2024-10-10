void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int temp;
	i = 0;i
	
	size --;
	while (i < size / 2)
	{
		temp = tab [i];
		tab[i] = tab[size];
		tab[size] = tab [i];
		size --;
		i ++;
	}
}
