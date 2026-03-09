/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:17:20 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:25:45 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
int		ft_is_lowcase(char c);

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%s\n", ft_strupcase(argv[1]));
// }

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lowcase(str[i]))
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}

int	ft_is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
