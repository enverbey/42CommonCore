/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:21:28 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/02 03:06:21 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rrr(t_stack *stack)
{
	rra(stack, 0);
	rrb(stack, 0);
	ft_putstr("rrr\n");
}

void	rra(t_stack *stack, int print)
{
	t_stack_node	*temp;
	t_stack_node	*temp2;

	temp = stack->head_a;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = 0;
	temp2->next = stack->head_a;
	stack->head_a = temp2;
	if (print)
		ft_putstr("rra\n");
}

void	rrb(t_stack *stack, int print)
{
	t_stack_node	*temp;
	t_stack_node	*temp2;

	temp = stack->head_b;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = 0;
	temp2->next = stack->head_b;
	stack->head_b = temp2;
	if (print)
		ft_putstr("rrb\n");
}
