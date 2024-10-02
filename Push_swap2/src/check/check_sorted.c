/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:22:38 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/02 00:52:25 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = stack->head_a;
	b = stack->head_b;
	if ((a && b) && (a->order && b->order) && (a->order < b->order))
		return (0);
	while (stack->head_b && b->next)
	{
		if (b->order < b->next->order)
			return (0);
		b = b->next;
	}
	while (stack->head_a && a->next)
	{
		if (a->order > a->next->order)
			return (0);
		a = a->next;
	}
	return (1);
}
