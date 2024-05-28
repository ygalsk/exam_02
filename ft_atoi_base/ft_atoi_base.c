char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return c;
}

int based(char c, int base)
{
	int max_dig;

	if (base <= 10)
	{
		max_dig = base + '0';
	}
	else
		max_dig = base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_dig)
	{
		return (c - '0');
	}
	else if (c >= 'a' && c <= 'f' && c <= max_dig)
	{
		return (10 + c - 'a');
	}
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = based(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		str++;
	}
	return res;
}
