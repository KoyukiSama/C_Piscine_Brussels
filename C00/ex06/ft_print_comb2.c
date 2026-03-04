/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:23:14 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/04 13:28:05 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
int		ft_putdig(int nbr1, int nbr2);
void	ft_putnbr(int nbr);
void	ft_putchar(char nbr);

// int	main(void)
// {
// 	ft_print_comb2();
// }

void	ft_print_comb2(void)
{
	int	dig1;
	int	dig2;

	dig1 = 0;
	dig2 = 1;
	while (dig1 <= 98)
	{
		while (dig2 <= 99)
		{
			if (ft_putdig(dig1, dig2))
				return ;
			dig2++;
		}
		dig1++;
		dig2 = dig1 + 1;
	}
}

int	ft_putdig(int nbr1, int nbr2)
{
	ft_putnbr(nbr1);
	ft_putchar(' ');
	ft_putnbr(nbr2);
	if (nbr1 == 98 && nbr2 == 99)
		return (1);
	return (ft_putchar(','), ft_putchar(' '), 0);
}

void	ft_putnbr(int nbr)
{
	ft_putchar((nbr / 10) + '0');
	ft_putchar((nbr % 10) + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
