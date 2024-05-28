#include <unistd.h>

int is_printed(char *s, char c, int n)
{
	int i = 0;

	while (s[i] && i < n)
	{
		if (c == s[i])
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			int j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !is_printed(argv[1], argv[1][i], i))
				{
					write(1, &argv[1][i], 1);
					break;
				}	
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
