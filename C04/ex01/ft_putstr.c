/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:38:01 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/12 13:42:23 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	ft_putstr(argv[1]);
// }

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
