/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:48:37 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 13:57:54 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%i", ft_str_is_alpha(argv[1]));
// }

int	ft_str_is_alpha(char *str)
{
	while ((*str > 'a' && *str < 'z')
		|| (*str > 'A' && *str < 'Z'))
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
