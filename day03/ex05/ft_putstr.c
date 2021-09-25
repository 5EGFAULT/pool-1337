int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (*str)
	{
		while (str[++i] != '\0')
		{
			ft_putchar(str[i]);
		}
	}
}
