int		max(int* tab, unsigned int len)
{
	int res;
	unsigned int i = 0;

	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
		{
			res = tab[i];
		}
		i++;
	}
	return res;
}
