/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:59:42 by hotto             #+#    #+#             */
/*   Updated: 2025/05/06 08:59:46 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numberwords(char const *s, char delimiter)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != delimiter)
		{
			while ((s[i] != delimiter) && (s[i] != '\0'))
				i++;
			n++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (n);
}

static char	*getword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	word = malloc (sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, (i + 1));
	return (word);
}

static void	*freememory(char **arrs)
{
	int	i;

	i = 0;
	while (arrs[i] != NULL)
	{
		free(arrs[i]);
		i++;
	}
	free(arrs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	size_t	i;
	size_t	j;
	size_t	nwords;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	nwords = numberwords(s, c);
	splits = malloc(sizeof(char *) * (nwords + 1));
	if (!splits)
		return (NULL);
	while ((s[i] != '\0') && (j < nwords))
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		splits[j] = getword(s + i, c);
		if (!splits[j])
			return (freememory(splits));
		i += ft_strlen(splits[j]);
		j++;
	}
	splits[j] = NULL;
	return (splits);
}
