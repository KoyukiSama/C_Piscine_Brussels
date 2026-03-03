/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:54:32 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/03 17:09:20 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
