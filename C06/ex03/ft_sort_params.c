/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:09:47 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/16 16:21:22 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_ptr_swp(char **s1, char **s2);
void	ft_sort_strs(char **strs, int strc);

// int main(int argc, char **argv)
// {	
// 	int	i;

// 	ft_sort_strs(argv + 1, argc - 1);
// 	i = 0;
// 	while (i < argc - 1)
// 		ft_putstr(argv[i++ + 1]);
// 	return (0);
// }

void	ft_sort_strs(char **strs, int strc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < strc - 1)
	{
		while (j < strc)
		{
			if (ft_strcmp(strs[i], strs[j]) > 0)
				ft_ptr_swp(strs + i, strs + j);
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	ft_ptr_swp(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s2;
	*s2 = *s1;
	*s1 = tmp;
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
	return (0);
}
