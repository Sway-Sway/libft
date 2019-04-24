#include <stdlib.h>
#include <errno.h>

char	*ft_strcpy(char *dest, char *stc)
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
	if (src == NULL)
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
	ft_strcpy(str,src);
	return (str);
}
