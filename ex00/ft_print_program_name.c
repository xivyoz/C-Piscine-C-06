#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	argc = 0;
	while (argv[0][count])
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
