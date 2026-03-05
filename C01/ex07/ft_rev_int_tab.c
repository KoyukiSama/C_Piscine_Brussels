/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:25:51 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/05 14:05:11 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

// #include <stdio.h>
// void	print_tab(int *tab, int size)
// {
// 	printf("[");
// 	while (size)
// 	{
// 		printf("%i", tab[--size]);
// 		if (size)
// 			printf(", ");
// 	}
// 	printf("]");
// 	printf("\n");
// }
// int	main(void)
// {
// 	int	tab1[] = {0, 1, 2, 3, 4};
// 	int	tab2[] = {0, 1, 2, 3, 4, 5};
// 	int	tab3[] = {0, 1, 2, 3, 4, 5, 6};
// 	print_tab(tab1, 5);
// 	print_tab(tab2, 6);
// 	print_tab(tab3, 7);
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size;
	while (j > i)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tab[i];
	}
}
