#include <unistd.h>

void ft_putchar_n(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void rep_alph(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			ft_putchar_n(*s, *s + 1 - 'a');
		else if (*s >= 'A' && *s <= 'Z')
			ft_putchar_n(*s, *s + 1 - 'A');
		else
		 write(1, s, 1);
	 s++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		rep_alph(argv[1]);
	write(1, "\n", 1);
	return 0;
}
