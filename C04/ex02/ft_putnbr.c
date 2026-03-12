/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:43:16 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/12 13:58:36 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 1)
// 	{
// 		ft_putnbr(-2147483648);
// 		ft_putchar('\n');
// 		ft_putnbr(2147483647);
// 		ft_putchar('\n');
// 		ft_putnbr(10);
// 		ft_putchar('\n');
// 		ft_putnbr(0);
// 		ft_putchar('\n');
// 		ft_putnbr(-10);
// 		ft_putchar('\n');
// 		return (0);
// 	}
// 	if (argc != 2)
// 		return (1);
// 	ft_putnbr(atoi(argv[1]));
// }

void	ft_putnbr(int nbr)
{
	long	lng;
	long	len;
	char	str[10];

	lng = nbr;
	len = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	if (lng < 0)
	{
		ft_putchar('-');
		lng *= -1;
	}
	while (lng)
	{
		str[len++] = (lng % 10) + '0';
		lng /= 10;
	}
	while (len)
		ft_putchar(str[--len]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
