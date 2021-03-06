/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:51:58 by agonzale          #+#    #+#             */
/*   Updated: 2021/05/25 12:52:02 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char			*source;
	unsigned int	i;

	i = 0;
	source = (char *)src;
	if (dstsize == 0)
		return (ft_strlen(source));
	if (!dst || !src)
		return (0);
	while (i < dstsize - 1 && source[i])
	{
		dst[i] = source[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(source));
}
