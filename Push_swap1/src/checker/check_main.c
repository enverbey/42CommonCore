/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:06:18 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:12:23 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

int	checker_push_swap(char **s)
{
	if (check_number(s) && check_equal(s))
		if (check_int(s))
			return (1);
	ft_putstr("Error\n");
	return (0);
}
