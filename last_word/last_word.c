#include <unistd.h>

int main(int argc, char **argv)
{
	int	start = 0;
	int end = 0;

	if (argc == 2)
	{
		while (argv[1][start])
			start++;
		start--;
		while ((argv[1][start] == ' ' || argv[1][start] == '\t') && (start > 0))
			start--;
		end = start--;
		while (argv[1][start] != ' ' && argv[1][start] != '\t' )
			start--;
		while (start++ < end)
			write(1, &argv[1][start], 1);
	}
	write(1, "\n", 1);
	return 0;
}
