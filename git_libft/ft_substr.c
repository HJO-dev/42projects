/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:42:47 by hotto             #+#    #+#             */
/*   Updated: 2025/05/05 16:52:38 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((start > slen) || !len)
		return (ft_strdup(""));
	if ((start + len) > slen)
		subs = malloc(sizeof(char) * (slen - start + 1));
	else
		subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while ((i < (start + len)) && (s[i] != '\0'))
		subs[j++] = s[i++];
	subs[j] = '\0';
	return (subs);
}
