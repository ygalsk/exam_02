#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int nbr1 = atoi(argv[1]);
		int nbr2 = atoi(argv[3]);

		if (argv[2][0] == '*')
			printf("%d", nbr1 * nbr2);
		if (argv[2][0] == '/')
			printf("%d", nbr1 / nbr2);
		if (argv[2][0] == '+')
			printf("%d", nbr1 + nbr2);
		if (argv[2][0] == '-')
			printf("%d", nbr1 - nbr2);
		if (argv[2][0] == '%')
			printf("%d", nbr1 % nbr2);
	}
	printf("\n");	
	return 0;
}
