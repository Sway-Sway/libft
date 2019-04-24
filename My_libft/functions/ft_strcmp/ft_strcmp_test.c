#include <string.h>
#include <unistd.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;
	int s1_total;
	int s2_total;

	i = 0;
	s1_total = 0;
	s2_total = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			s1_total = s1[i];
			s2_total = s2[i];
			break;
		}
		i++;
	}
	return (s1_total - s2_total);
}

int	main(void)
{
	char a[] = "car";
	char b[] = "cap";
	ft_strcmp(a,b);
	printf("%d\n", ft_strcmp(a,b));
	return (0);
}
