/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:03:59 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/05 18:16:18 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[3];
	char src[] = "hello";
	strcpy(dest, src);
	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
