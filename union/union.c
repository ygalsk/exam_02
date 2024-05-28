#include <unistd.h>

int printed(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (c == s[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int main(int argc,char **argv)
{
	int i = 0;
	int j = 0;
	char seen[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!printed(seen, argv[1][i]))
			{
				seen[j]	= argv[1][i];
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!printed(seen, argv[2][i]))
			{
				seen[j]	= argv[2][i];
				write(1, &argv[2][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
