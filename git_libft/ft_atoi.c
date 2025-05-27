/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:00:40 by hotto             #+#    #+#             */
/*   Updated: 2025/03/25 11:00:43 by hotto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
		return (0);
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * neg;
	return (res);
}
