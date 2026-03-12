/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:55:33 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/12 17:03:39 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_invalid(char *base, int base_len);
int		ft_strlen(char *str);

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("invalid base: %i\n", is_invalid(argv[2], ft_strlen(argv[2])));
// 	ft_putnbr_base(atoi(argv[1]), argv[2]);
// }

void	putnbr_base(long *nbr, char *base, int base_len);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	l_nbr;

	base_len = ft_strlen(base);
	if (is_invalid(base, base_len))
		return ;
	if (nbr == 0)
	{
		write(1, base, 1);
		return ;
	}
	l_nbr = nbr;
	if (l_nbr < 0)
	{
		l_nbr *= -1;
		write(1, "-", 1);
	}
	putnbr_base(&l_nbr, base, base_len);
}

void	putnbr_base(long *nbr, char *base, int base_len)
{
	long	curr_nbr;

	curr_nbr = *nbr % base_len;
	*nbr /= base_len;
	if (*nbr == 0)
	{
		write(1, base + curr_nbr, 1);
		return ;
	}
	putnbr_base(nbr, base, base_len);
	write(1, base + curr_nbr, 1);
}

int	is_invalid(char *base, int base_len)
{
	int	i;

	if (base_len <= 1)
		return (1);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (*base && base[1])
	{
		while (base[i + 1])
		{
			if (*base == base[i + 1])
				return (1);
			i++;
		}
		i = 0;
		base++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
