/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:42:54 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/11 12:33:44 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
// 	char	dest[30];
// 	char	ft_dest[30];
//
// 	if (argc != 3)
// 		return (1);
// 	strcpy(dest, argv[1]);
// 	strcpy(ft_dest, argv[1]);
// 	printf("   strcat_dest: %s\n", strcat(dest, argv[2]));
// 	printf("ft_strcat_dest: %s\n", (ft_dest, argv[2]));
// }

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
