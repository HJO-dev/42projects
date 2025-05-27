/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:20:59 by hotto             #+#    #+#             */
/*   Updated: 2025/04/29 09:21:04 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
		if (dest < src)
			ft_memcpy(dest, src, n);
		else
		{
			i = n;
			while (i > 0)
			{
				tmpd[i - 1] = tmps[i - 1];
				i--;
			}
		}
		return (dest);
	}
}
