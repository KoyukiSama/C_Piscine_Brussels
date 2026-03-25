/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:18:00 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/25 19:22:37 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

// #include <stdio.h>
// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }	t_stock_str;
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
// void ft_show_tab(struct s_stock_str *par);
// int	main(int argc, char **argv)
// {
// 	t_stock_str *strs = ft_strs_to_tab(argc, argv);
// 	int			i = 0;

// 	ft_show_tab(strs);
// 	printf("\n\n");
// 	while (i < argc)
// 	{
// 		printf("strs[%i] {\nstrs.strs: \"%s\"\n", i, strs[i].str);
// 		printf("strs.cpy:  \"%s\"\n", strs[i].copy);
// 		printf("strs.size:  %i\n}\n\n", strs[i].size);
// 		free(strs[i].copy);
// 		i++;
// 	}
// 	printf("strs[%i] {\nstrs.strs: \"%s\"\n", i, strs[i].str);
// 	printf("strs.cpy:  \"%s\"\n", strs[i].copy);
// 	printf("strs.size:  %i\n}\n\n", strs[i].size);
// 	free(strs);
// 	return (0);
// }
// int		ft_strlen(char *str);
// char	*ft_strdup(char *str);
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str	*str_array;
// 	int			i;
// 	str_array = malloc(sizeof(*str_array) * (ac + 1));
// 	if (!str_array)
// 		return (NULL);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		str_array[i].str = av[i];
// 		str_array[i].size = ft_strlen(av[i]);
// 		str_array[i].copy = ft_strdup(av[i]);
// 		if (str_array[i].copy == NULL)
// 		{
// 			i--;
// 			while (i >= 0)
// 				free(str_array[i--].copy);
// 			free(str_array);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	str_array[i].size = 0;
// 	return (str_array[i].str = 0, str_array[i].copy = 0, str_array);
// }
// char	*ft_strdup(char *str)
// {
// 	int		i;
// 	char	*cpy;
// 	cpy = malloc(ft_strlen(str) + 1);
// 	i = 0;
// 	while (str[i])
// 	{
// 		cpy[i] = str[i];
// 		i++;
// 	}
// 	cpy[i] = '\0';
// 	return (cpy);
// }

int		ft_strlen(char *str);
void	ft_putnbr(int nbr);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	long	lng;
	long	len;
	char	str[10];

	lng = nbr;
	len = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	if (lng < 0)
	{
		ft_putchar('-');
		lng *= -1;
	}
	while (lng)
	{
		str[len++] = (lng % 10) + '0';
		lng /= 10;
	}
	while (len)
		ft_putchar(str[--len]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
