/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:50:36 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 17:39:50 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	main(int ac, char **av)
{
	if (ac == 2)
		av = ft_split(av[1], ' ');
	else if (ac > 2)
		av++;
	else
		return (0);
	if (check_main(av))
		push_swap(av);
	if (ac == 2)
		free_array(av);
	return (0);
}
