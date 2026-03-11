/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:41:59 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/11 13:06:25 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	char	dest[30];
	char	ft_dest[30];
	if (argc != 3)
		return (1);
	strcpy(dest, argv[1]);
	strcpy(ft_dest, argv[1]);
	printf("   strstr: %s\n", strstr(dest, argv[2]));
	printf("ft_strstr: %s\n", ft_strstr(ft_dest, argv[2]));
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str && *str != *to_find)
		str++;
	while (str[i] == to_find[i] && str[i])
		i++;
	if (to_find[i] == '\0')
		return (str);
	return (NULL);
}
