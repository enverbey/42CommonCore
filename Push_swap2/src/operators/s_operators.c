/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:05:20 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/01 22:14:18 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_stack *stack, int print)
{
	int	tmp_data;
	int	tmp_order;

	if (!stack->head_a || !stack->head_a->next)
		return ;
	tmp_data = stack->head_a->data;
	tmp_order = stack->head_a->order;
	stack->head_a->data = stack->head_a->next->data;
	stack->head_a->order = stack->head_a->next->order;
	stack->head_a->next->data = tmp_data;
	stack->head_a->next->order = tmp_order;
	if (print)
		ft_putstr("sa\n");
}

void	sb(t_stack *stack, int print)
{
	int	tmp_data;
	int	tmp_order;

	if (!stack->head_b || !stack->head_b->next)
		return ;
	tmp_data = stack->head_b->data;
	tmp_order = stack->head_b->order;
	stack->head_b->data = stack->head_b->next->data;
	stack->head_b->order = stack->head_b->next->order;
	stack->head_b->next->data = tmp_data;
	stack->head_b->next->order = tmp_order;
	if (print)
		ft_putstr("sb\n");
}
