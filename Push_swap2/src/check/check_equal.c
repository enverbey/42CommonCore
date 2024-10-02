/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_equal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:21:12 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/01 19:25:11 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_equal(char *s1, char *s2)
{
	if (ft_atoi(s1) != ft_atoi(s2))
		return (0);
	return (1);
}

int	check_equal(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (is_equal(s[i], s[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
