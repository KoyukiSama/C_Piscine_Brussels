/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:10:53 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:13:07 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%i", ft_str_is_uppercase(argv[1]));
// }

int	ft_str_is_uppercase(char *str)
{
	while (*str >= 'A' && *str <= 'Z')
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
