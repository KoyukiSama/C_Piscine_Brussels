/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:07:38 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 20:15:36 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("   strcmp: %i\n", strcmp(argv[1], argv[2]));
// 	printf("ft_strcmp: %i\n", ft_strcmp(argv[1], argv[2]));
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned int) *s1 - (unsigned int) *s2);
}
