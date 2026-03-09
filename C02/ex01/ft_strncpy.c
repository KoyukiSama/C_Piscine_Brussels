/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:05:09 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 16:24:22 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

// #include <stdio.h>
// #include <string.h>
// #define DEST_SIZE 10
// int	main(void)
// {
// 	char dest[DEST_SIZE];
// 	char src[] = "hello";
// 	strncpy(dest, src, DEST_SIZE);
// 	int	i = 0;
// 	while (i < DEST_SIZE)
// 	{
// 		if (dest[i])
// 			printf("%c", dest[i]);
// 		else
// 			printf("\\0");
// 		i++;
// 	}
// 	printf("\n");
// 	ft_strncpy(dest, src, DEST_SIZE);
// 	i = 0;
// 	while (i < DEST_SIZE)
// 	{
// 		if (dest[i])
// 			printf("%c", dest[i]);
// 		else
// 			printf("\\0");
// 		i++;
// 	}
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
