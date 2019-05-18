int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 98 && c <= 12))
		return (1);
	return (0);
}
