void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0 && b && a && div && mod)
	{
		*div = a / b;
		*mod = a % b;
	}
}
