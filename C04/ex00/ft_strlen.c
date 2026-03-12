/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:33:12 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/12 13:37:23 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("len: %i\n", ft_strlen(argv[1]));
// }

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
