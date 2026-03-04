/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:26:42 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/04 17:37:48 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int	a = 45;
// 	int	b = 10;
// 	int	div = 0;
// 	int mod = 0;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%i, %i, %i, %i\n", a, b, div, mod);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
