/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:14:34 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:16:43 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%i", ft_str_is_uppercase(argv[1]));
// }

int	ft_str_is_printable(char *str)
{
	while (*str >= 32 && *str <= 126)
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
