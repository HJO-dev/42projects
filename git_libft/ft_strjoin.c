/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:54:06 by hotto             #+#    #+#             */
/*   Updated: 2025/05/05 16:54:08 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	news = malloc (sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!news)
		return (NULL);
	while (s1[j] != '\0')
		news[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		news[i++] = s2[j++];
	news[i] = '\0';
	return (news);
}
