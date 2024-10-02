/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_equal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:12:04 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/26 16:12:45 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

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
