#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

