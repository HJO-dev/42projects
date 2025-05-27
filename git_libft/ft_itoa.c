/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:16:52 by hotto             #+#    #+#             */
/*   Updated: 2025/05/06 10:16:57 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*intchar(char *s, int n)
{
	int	i;

	i = charlen(n);
	s[i] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		i--;
		s[i] = (n % 10) + 48;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * (charlen(n) + 1));
	if (!res)
		return (NULL);
	return (intchar(res, n));
}
