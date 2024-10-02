/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:11 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/26 16:24:18 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

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
