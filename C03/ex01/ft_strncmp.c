/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:16:34 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/11 15:15:27 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	printf("   strncmp: %i\n", strncmp(argv[1], argv[2], atoi(argv[3])));
// 	printf("ft_strncmp: %i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned int) s1[i] - (unsigned int) s2[i]);
}
