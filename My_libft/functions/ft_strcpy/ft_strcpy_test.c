#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char a[] = "Joshua";
	char b[] = " ";

	ft_strcpy(a, b);
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
