/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:25:58 by hotto             #+#    #+#             */
/*   Updated: 2025/03/21 11:26:03 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	notend(char s1, char s2)
{
	if ((s1 != '\0') && (s2 != '\0'))
		return (1);
	else
		return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		if ((s1[i] == '\0') && (s2[i] != '\0'))
			return (-s2[i]);
		if ((s2[i] == '\0') && (s1[i] != '\0'))
			return (s1[i]);
		while (notend(s1[i], s2[i]) && (s1[i] == s2[i]) && (i < (n - 1)))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}
