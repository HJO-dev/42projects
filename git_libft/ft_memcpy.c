/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:50:05 by hotto             #+#    #+#             */
/*   Updated: 2025/04/29 08:50:09 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpd;
	unsigned char	*tmps;

	if (!dest && !src)
		return (NULL);
	else
	{
		tmpd = (unsigned char *)dest;
		tmps = (unsigned char *)src;
		i = 0;
		while (i < n)
		{
			tmpd[i] = tmps[i];
			i++;
		}
		return (dest);
	}
}
