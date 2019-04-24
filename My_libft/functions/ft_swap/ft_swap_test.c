#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

int	main(void)
{
	int x = 5;
	int y = 10;
	int *a = &x;
	int *b = &y;

	ft_swap(a, b);
	ft_putnbr(*b);
	ft_putchar('\n');
	return (0);
}
