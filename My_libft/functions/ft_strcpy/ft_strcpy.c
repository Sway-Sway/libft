char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while ( s1[len] != '\0' )
	{
		len++;
	}
	len++;
	while ( i < len )
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

