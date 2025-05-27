/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:02:59 by hotto             #+#    #+#             */
/*   Updated: 2025/04/30 18:03:02 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		compare;
	int		strlenlittle;

	i = 0;
	if ((little[i] == '\0') || (!little))
		return ((char *)big);
	strlenlittle = ft_strlen(little);
	while ((i < len) && (big[i] != '\0'))
	{
		compare = ft_strncmp((char *)(big + i), (char *)little, strlenlittle);
		if ((compare == 0) && ((i + strlenlittle - 1) < len))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
