#include <unistd.h>

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	put_nbr(argc -1);
	write(1, "\n", 1);
	
}
