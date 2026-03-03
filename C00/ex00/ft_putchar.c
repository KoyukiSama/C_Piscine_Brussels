/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:55:15 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/03 16:55:19 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

// int main(void)
// {
//	ft_putchar('t');
// }

void ft_putchar(char c)
{
	write(1, &c, 1);
}
