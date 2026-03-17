/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:48:59 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/17 14:30:21 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_tot_len(int size, char **strs, char *sep);

#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	printf("tot_len: %i\n", ft_tot_len(argc - 2, argv + 2, argv[1]));
	char *str = ft_strjoin(argc - 2, argv + 2, argv[1]);
	printf("str: %s\n", str);
	free(str);
}

char	*ft_strdup(char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*str_curr;
	int		tot_size;
	int		i;
	int		j;

	if (size <= 0)
		return (ft_strdup(""));
	tot_size = ft_tot_len(size, strs, sep);
	str = malloc(tot_size);
	if (!str)
		return (str);
	i = 0;
	while (i < tot_size - 1)
	{
		str_curr = *strs;
		j = 0;
		while (str_curr[j] && i < tot_size - 1)
			str[i++] = str_curr[j++];
		j = 0;
		while (sep[j] && i < tot_size - 1)
			str[i++] = sep[j++];
		strs++;
	}
	return (str[i] = '\0', str);
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


int	ft_tot_len(int size, char **strs, char *sep)
{
	int	tot_sep_size;
	int	tot_strs_size;
	int	i;
	int	j;

	tot_sep_size = (size - 1) * ft_strlen(sep);
	tot_strs_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tot_strs_size++;
			j++;
		}
		i++;
	}
	return (tot_sep_size + tot_strs_size + 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

