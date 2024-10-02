/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:56:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/01 22:14:01 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pa(t_stack *stack)
{
	if (!stack->head_b)
		return ;
	push_a(stack, stack->head_b->data, stack->head_b->order);
	pop_b(stack);
	ft_putstr("pa\n");
}

void	pb(t_stack *stack)
{
	if (!stack->head_a)
		return ;
	push_b(stack, stack->head_a->data, stack->head_a->order);
	pop_a(stack);
	ft_putstr("pb\n");
}
