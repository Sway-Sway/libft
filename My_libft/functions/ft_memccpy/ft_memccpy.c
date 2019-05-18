#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c; size_t n)
{
	unsigned char *s2;
	unsigned char *d2;

	s2 = (unsigned char *)src;
	d2 = (unsigned char *)dest;
	while (n != 0)
	{
		*d2 = *s2;
		if (*s2 == (unsigned char)c
				return (d2 +1);
			d2++;
			s2++;
			n--;
	}
	reurn (NULL);
}


