/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaclaes <kaclaes@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:21:36 by kaclaes           #+#    #+#             */
/*   Updated: 2026/03/11 15:15:15 by kaclaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	src_len = 0;
	dst_len = 0;
	while (dst_len < size && dest[dst_len])
		dst_len++;
	while (src_len)
		src_len++;
	if (dst_len == size)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
