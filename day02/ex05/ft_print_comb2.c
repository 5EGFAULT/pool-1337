int		ft_putchar(char c);

void	printint(int c1)
{
	if (c1 < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + c1);
	}
	else
	{
		ft_putchar('0' + c1 / 10);
		ft_putchar('0' + c1 % 10);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			printint(i);
			ft_putchar(' ');
			printint(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
