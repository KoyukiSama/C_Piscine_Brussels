/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:02:43 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/12 14:37:12 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	ft_isspace(char c);
int	ft_issign(char c);
int	ft_isnum(char c);

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("   atoi: %i\n", atoi(argv[1]));
// 	printf("ft_atoi: %i\n", ft_atoi(argv[1]));
// }

int	ft_atoi(char *str)
{
	long	sign;
	long	nbr;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	while (ft_issign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	nbr = 0;
	while (ft_isnum(*str))
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return ((int) (sign * nbr));
}

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_isnum(char c)
{
	return (c >= '0' && c <= '9');
}
