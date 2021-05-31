/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:20:43 by agondard          #+#    #+#             */
/*   Updated: 2021/05/25 12:28:53 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (src == dest)
		return (NULL);
	if (src < dest)
	{	
		while (size > 0)
		{
			dest[size - 1] = src[size- 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}
