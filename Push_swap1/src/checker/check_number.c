/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:07:48 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 22:41:13 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_number(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i][j] == '+' && is_number(s[i][j + 1]))
			j++;
		while (s[i][j])
		{
			if (!is_number(s[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
