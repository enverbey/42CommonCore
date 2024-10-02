/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:35:00 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/01 19:06:24 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	check_main(char **s)
{
	if (check_number(s) && check_equal(s))
		if (check_int(s))
			return (1);
	ft_putstr("Error\n");
	return (0);
}
