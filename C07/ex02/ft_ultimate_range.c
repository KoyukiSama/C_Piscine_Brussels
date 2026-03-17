/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:41:19 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/17 13:48:05 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	int	*arr;
// 	int	size = ft_ultimate_range(&arr, atoi(argv[1]), atoi(argv[2]));
// 	if (!arr)
// 		return (2);
// 	int	i = 0;
// 	printf("[");
// 	while (i < size)
// 	{
// 		printf("%i", arr[i++]);
// 		if (i < size)
// 			printf(", ");
// 	}
// 	printf("]\n");
// 	free(arr);
// }

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return (*range = NULL, 0);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	i = 0;
	while (i < size)
		arr[i++] = min++;
	return (*range = arr, size);
}
