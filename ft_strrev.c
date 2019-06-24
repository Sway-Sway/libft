#include "libft.h"

char	*ft_strrev(char *str)
{
	int	count;
	int	len;
	int	ascii;

	len = ft_strlen(str);
	count = 0;
	while (count < len / 2)
	{
		ascii = str[count];
		str[count] = str[len - count - 1];
		str[len - count - 1] = ascii;
		count++;
	}
	return (str);
}
