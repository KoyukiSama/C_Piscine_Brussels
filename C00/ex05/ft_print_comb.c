/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 22:41:18 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/03 22:41:18 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	dig2 = '1';
	dig3 = '2';
	while (dig1 <= '7')
	{
		while (dig2 <= '8')
		{
			while (dig3 <= '9')
			{
				ft_putchar(dig1);
				ft_putchar(dig2);
				ft_putchar(dig3);
				if (dig1 == '7' && dig2 == '8' && dig3 == '9');
					return ;
				ft_putchar(, );
				dig3++;
			}
			dig2++;
			dig3 = dig2 + 1;
		}
		dig1++;
		dig2 = dig1 + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
