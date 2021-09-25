void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0 && *b && *a)
	{
		tmp = *a / *b;
		*b = *a % *b;
		*a = tmp;
	}
}
