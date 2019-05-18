void *ft_memmove(void *dest, void const *src, size_t n)
{
	chat *dest2;
	
	dest2 = (char*)malloc(sizeof(char) * n + 1);
	dest2[n + 1] = '\0';
	ft_memcpy(dest2, src, n);
	ft_memcpy(dest, dest2, n);
	free(dest2);
	return (dest);
}