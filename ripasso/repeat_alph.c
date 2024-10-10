#include <unistd.h>
void repeat_alpha(const char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			int	repeat_count;
			int	j;
			if (str[i] >= 'a')
			{
				repeat_count = str[i] - 'a' + 1;
			}
			else
			{
				repeat_count = str[i] - 'A' + 1;
			}
			while (j < repeat_count)
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
}
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv[1]);
	return(0);


}
