/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:42:53 by hotto             #+#    #+#             */
/*   Updated: 2025/04/30 18:42:55 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;

	if (!s)
		return (NULL);
	duplicate = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
