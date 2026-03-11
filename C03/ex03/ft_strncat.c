/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:14:41 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/11 12:35:02 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	char	dest[30];
// 	char	ft_dest[30];
// 	if (argc != 4)
// 		return (1);
// 	strcpy(dest, argv[1]);
// 	strcpy(ft_dest, argv[1]);
// 	printf("   strncat: %s\n", strncat(dest, argv[2], atoi(argv[3])));
// 	printf("ft_strncat: %s\n", ft_strncat(ft_dest, argv[2], atoi(argv[3])));
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < nb && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
