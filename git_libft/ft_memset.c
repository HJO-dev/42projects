/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:37:52 by hotto             #+#    #+#             */
/*   Updated: 2025/04/25 13:37:55 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	if (!s)
		return (NULL);
	else
	{
		i = 0;
		tmp = (unsigned char *)s;
		while (i < n)
		{
			tmp[i] = (unsigned char)c;
			i++;
		}
	}
	return (s);
}
