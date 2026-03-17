/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:27:58 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/17 12:38:10 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src);

#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	char	*dup1 = strdup(argv[1]);
	char	*dup2 = ft_strdup(argv[1]);
	printf("   strdup: %s\n", dup1);
	printf("ft_strdup: %s\n", dup2);
	free(dup1);
	free(dup2);
}

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	len = 0;
	
	while (str[len])
		len++;
	return (len);
}
