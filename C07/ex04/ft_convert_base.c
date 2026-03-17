/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:27:03 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/17 17:26:25 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	
}

int		ft_nbr_is_in_base(char nbr, char *base);
int		is_invalid(char *base, int base_len);
int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		from_len;
	int		to_len;
	long	sign;
	long	lng;
	char	*new_nbr;

	from_len = ft_strlen(base_from);
	to_len = ft_strlen(base_to);
	if (is_invalid(base_to, to_len) || is_invalid(base_from, from_len))
		return (NULL);
	new_nbr = malloc(65);
	if (!new_nbr)
		return (NULL);
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (ft_nbr_is_in_base(*nbr, base_from))
	{
		lng *= // TODO
		lng = 
	}
}

int	ft_nbr_is_in_base(char nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != nbr)
		i++;
	if (base[i] == '\0')
		return (0);
	return (1);
}

int	is_invalid(char *base, int base_len)
{
	int	i;

	if (base_len <= 1)
		return (1);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (*base && base[1])
	{
		while (base[i + 1])
		{
			if (*base == base[i + 1])
				return (1);
			i++;
		}
		i = 0;
		base++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
