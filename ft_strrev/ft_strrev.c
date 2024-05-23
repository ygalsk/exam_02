#include <stdio.h>

char *ft_strrev(char *str)
{
	int len = 0;
	int j = 0;
	char tmp;

	while (str[len])
		len++;
	while (--len > j)
	{
		tmp = str[j];
		str[j] = str[len];
		str[len] = tmp;
		j++;
	}
	return str;
}
