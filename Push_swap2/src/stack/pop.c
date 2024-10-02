/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:54:12 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/01 21:11:08 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void	pop_a(t_stack *stack)
{
	t_stack_node	*tmp_node;

	tmp_node = stack->head_a;
	stack->head_a = tmp_node->next;
	free(tmp_node);
}

void	pop_b(t_stack *stack)
{
	t_stack_node	*tmp_node;

	tmp_node = stack->head_b;
	stack->head_b = tmp_node->next;
	free(tmp_node);
}
