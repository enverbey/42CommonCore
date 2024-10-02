/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:14:34 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/04 21:19:10 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void	rr(t_stack *stack)
{
	ra(stack, 0);
	rb(stack, 0);
	ft_putstr("rr\n");
}

void	ra(t_stack *stack, int print)
{
	t_stack_node	*temp;
	t_stack_node	*temp2;

	temp2 = stack->head_a;
	temp = stack->head_a;
	if (!stack->head_a->next)
		return ;
	stack->head_a = stack->head_a->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = NULL;
	if (print)
		ft_putstr("ra\n");
}

void	rb(t_stack *stack, int print)
{
	t_stack_node	*temp;
	t_stack_node	*temp2;

	temp2 = stack->head_b;
	temp = stack->head_b;
	if (!stack->head_b->next)
		return ;
	stack->head_b = stack->head_b->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = 0;
	if (print)
		ft_putstr("rb\n");
}
