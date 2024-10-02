/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:27:26 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 17:39:41 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h> 

void	push_swap(char **av)
{
	t_stack		*stack;
	int			i;

	i = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->head_a = NULL;
	stack->head_b = NULL;
	while (av[i])
		i++;
	i--;
	while (i >= 0)
	{
		push_a_order(stack, ft_atoi(av[i]));
		i--;
	}
	radix_short_with_bite(stack);
	free_stack(stack);
}
