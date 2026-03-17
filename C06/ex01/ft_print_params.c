/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:09:28 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/17 12:10:12 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)	
		ft_putstr(argv[i++]);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}
