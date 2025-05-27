/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:57:44 by hotto             #+#    #+#             */
/*   Updated: 2025/03/24 17:57:35 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	newsize;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (!size)
		return (srcsize);
	newsize = ft_strlen(dst);
	if (newsize > size)
		return (srcsize + size);
	while ((src[i] != '\0') && ((i + newsize) < (size -1)))
	{
		dst[newsize + i] = src[i];
		i++;
	}
	dst[newsize + i] = '\0';
	return (newsize + srcsize);
}
