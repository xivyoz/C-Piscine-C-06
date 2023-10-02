#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	count;
	int	value;

	count = 0;
	value = argc - 1;
	while (value > 0)
	{
		while (argv[value][count])
		{
			ft_putchar(argv[value][count]);
			count++;
		}
		ft_putchar('\n');
		count = 0;
		value--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
