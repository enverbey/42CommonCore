/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:27 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 16:42:13 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// -2147483648 <int> 2147483647
int	is_int(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (s[0] == '-' || s[0] == '+')
		len--;
	if (len < 10)
		return (1);
	if (len > 10)
		return (0);
	if (s[0] == '-')
		if (ft_strcmp("-2147483648", s) < 0)
			return (0);
	if (s[0] == '+')
		if (ft_strcmp("+2147483647", s) < 0)
			return (0);
	if (len == 10)
		if (ft_strcmp("2147483647", s) < 0)
			return (0);
	return (1);
}

int	check_int(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!is_int(s[i]))
			return (0);
		i++;
	}
	return (1);
}
