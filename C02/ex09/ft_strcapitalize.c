/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:29:16 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/09 14:47:54 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);
int	ft_is_alphanum(char c);
int	ft_is_num(char c);
int	ft_is_lower(char c);

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", ft_strcapitalize(argv[1]));
}

char *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alphanum(str[i]))
		{
			if (ft_is_lower(str[i]))
				str[i] += 'A' - 'a';
			while (ft_is_alphanum(str[i]))
				i++;
		}
		while (!ft_is_alphanum(str[i]))
			i++;
	}
	return (str);
}

int	ft_is_lower(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
