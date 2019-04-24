#include <string.h>

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
	//make ptr point to the end of the destination string
	char *ptr = dest + ft_strlen(dest);
	
	//append characters of src to the destination string 
	while (*src != '\0')
		*ptr++ = *src++;

	//null terminate destination string 
	*ptr = '\0';

	return (dest);
}
