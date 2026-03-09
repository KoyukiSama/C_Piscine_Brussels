/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:02:51 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:07:41 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%i", ft_str_is_lowercase(argv[1]));
}

int	ft_str_is_lowercase(char *str)
{
	while (*str >= 'a' && *str <= 'z')
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
