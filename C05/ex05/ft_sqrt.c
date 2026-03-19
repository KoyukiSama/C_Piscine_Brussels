/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:43:02 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/19 14:49:44 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%i", ft_sqrt(atoi(argv[1])));
// }

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 1;
	while (mult * mult < nb)
		mult++;
	if (mult * mult > nb)
		return (0);
	return (mult);
}
