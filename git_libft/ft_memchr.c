/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:09:08 by hotto             #+#    #+#             */
/*   Updated: 2025/04/29 12:09:13 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmps;

	i = 0;
	tmps = (unsigned char *)s;
	while (i < n)
	{
		if (tmps[i] == (unsigned char)c)
			return ((void *)&tmps[i]);
		i++;
	}
	return (NULL);
}
