#include <unistd.h>

int ft_atoi(char *s)
{
	int nbr = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		nbr = nbr * 10 + *s - '0';
		s++;
	}
	return (nbr * sign);
}

void	put_nbr(int n)
{
	char digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		while (i <= 9)
		{
			int nbr = ft_atoi(argv[1]);
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nbr);
			write(1, " = ", 3);
			put_nbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}
