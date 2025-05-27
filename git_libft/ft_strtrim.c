/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:28:25 by hotto             #+#    #+#             */
/*   Updated: 2025/05/06 08:29:03 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while ((s1[i] != '\0') && ft_strchr(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while ((s1[j] != '\0') && ft_strchr(set, s1[j]))
		j--;
	trims = malloc (sizeof(char) * (j - i + 2));
	if (!trims)
		return (NULL);
	ft_strlcpy(trims, s1 + i, j - i + 2);
	return (trims);
}
