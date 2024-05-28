typedef struct  s_point
{
	int           x;
	int           y;
}               t_point;

void fill(char **tab, t_point size, char target, int y, int x)
{
	if (y < 0 || x < 0 || y >= size.y || x >= size.x)
		return;
	if (tab[y][x] == 'F' || tab[y][x] != target)
		return;
	tab[y][x] = 'F';
	fill(tab, size, target, y - 1, x);
	fill(tab, size, target, y + 1, x);
	fill(tab, size, target, y, x - 1);
	fill(tab, size, target, y, x + 1);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.y, begin.x);
}
