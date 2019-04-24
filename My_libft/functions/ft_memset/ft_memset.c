#include <string.h>

void	ft_memset(void *s, int c, size_t len)
{
	unisgned char *ptr = s;

	while(len--)
		*ptr++ = (unsigned char)c;
	return (s);
}

