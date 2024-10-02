/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:31:25 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 15:26:54 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void	push_a_order(t_stack *stack, int data)
{
	t_stack_node	*new_node;
	t_stack_node	*tmp_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	new_node->data = data;
	new_node->order = 1;
	new_node->next = NULL;
	if (stack->head_a != NULL)
		new_node->next = stack->head_a;
	stack->head_a = new_node;
	tmp_node = new_node->next;
	while (new_node && tmp_node)
	{
		if (tmp_node->data > new_node->data)
			tmp_node->order++;
		else
			new_node->order++;
		tmp_node = tmp_node->next;
	}
}

void	push_a(t_stack *stack, int data, int order)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	new_node->data = data;
	new_node->order = order;
	new_node->next = NULL;
	if (stack->head_a != NULL)
		new_node->next = stack->head_a;
	stack->head_a = new_node;
}

void	push_b(t_stack *stack, int data, int order)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	new_node->data = data;
	new_node->order = order;
	new_node->next = NULL;
	if (stack->head_b != NULL)
		new_node->next = stack->head_b;
	stack->head_b = new_node;
}
