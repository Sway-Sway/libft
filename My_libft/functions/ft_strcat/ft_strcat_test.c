#include <unistd.h>
#include <string.h>

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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char *ptr = dest + ft_strlen(dest);

	while ( *src != '\0')
		*ptr++ = *src++;
	
	*ptr = '\0';

	return (dest);
}

int	main(void)
{
	char a[] = "Joshua ";
	char b[] = "Kwayiba";
	ft_strcat(a, b);
	ft_putstr(a);
	ft_putchar('\n');
	return (0);
}
