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

void	ft_is_negative(int n);
void	ft_putchar(char c);

int	main(void)
{
	ft_is_negative();
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	ft_putchar('P');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
