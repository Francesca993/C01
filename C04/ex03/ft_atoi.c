int	ft_atoi(char *str)
{
	int	i;
	char	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while ((str[i]== ' ') || (str[i]== '\t') || (str[i]== '\v') ||(str[i]== '\n') ||(str[i]== '\r') ||(str[i]== '\f'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign *(-1);
		}
		i++
	}
	if (str[i] >= '0' || str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
	}
	return (result)
}
