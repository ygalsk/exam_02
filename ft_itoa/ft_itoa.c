#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;
	char *res;

	if (nbr == INT_MIN)
		return ("INT_MIN\0");
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len ++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return res;
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return res;
}
