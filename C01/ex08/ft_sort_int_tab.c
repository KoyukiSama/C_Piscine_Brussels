/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:54:13 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/05 17:14:18 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

#include <stdlib.h>
#include <stdio.h>
void	print_tab(int *tab, int size)
{
	size_t	i = 0;

	printf("[");
	while (i < size)
	{
		printf("%i", tab[i++]);
		if (i < size)
			printf(", ");
	}
	printf("]");
	printf("\n");
}
int	main(int argc, char **argv)
{
	size_t	i = 0;
	int	tab_size = argc - 1;

	if (argc < 2)
		return (1);
	int *tab = malloc(sizeof(int) * (tab_size));
	while (i < tab_size)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	print_tab(tab, tab_size);
	ft_sort_int_tab(tab, tab_size);
	print_tab(tab, tab_size);
	free(tab);
}

int	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	swap = 1;
	i = 0;
	while (swap)
	{
		swap = 0;
		size--;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
				swap = ft_swap(tab + i, tab + i + 1);
			i++;
		}
		i = 0;
	}
}

int	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
	return (1);
}
