#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main(void)
{
	char s[] = "Joshua Kwayiba";
	ft_strlen(s);
	printf("%d\n" , ft_strlen(s));
	return(0);
}
