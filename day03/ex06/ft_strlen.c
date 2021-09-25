int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	if (*str)
		while (str[++i] != '\0')
			;
	return (i);
}
