/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:25:15 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 15:59:45 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void	free_node(t_stack_node *node)
{
	if (node->next != NULL)
		free_node(node->next);
	free(node);
}

void	free_stack(t_stack *stack)
{
	if (stack->head_a)
		free_node(stack->head_a);
	if (stack->head_b)
		free_node(stack->head_b);
	free(stack);
}
