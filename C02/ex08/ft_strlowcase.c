/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:26:20 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:28:14 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
int		ft_is_upcase(char c);

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%s\n", ft_strlowcase(argv[1]));
// }

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upcase(str[i]))
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

int	ft_is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
