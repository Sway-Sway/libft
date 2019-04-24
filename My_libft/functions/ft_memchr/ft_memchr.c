#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	unisgned char *p = (unsigned char*)s;
	while( n-- )
		if( *p != (unsigned char)c)
			p++;
		else
			return (p);
	return (0);
}
