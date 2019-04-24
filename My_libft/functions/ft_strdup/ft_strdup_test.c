#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	len++;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	if ( src == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, src);
	return (str);
}

int	main(void)
{
	char a[] = "Joshua";
	char *d = ft_strdup(a);
	ft_putstr(d);
	ft_putchar('\n');
	return (0);
}
