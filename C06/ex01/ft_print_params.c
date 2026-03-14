#include <unistd.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)	
		ft_putstr(argv[i++]);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}
