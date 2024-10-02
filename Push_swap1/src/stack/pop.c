/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:09:31 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:16:02 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

static void	pop_a(t_stack *stack)
{
	t_node	*tmp_node;

	tmp_node = stack->a;
	stack->a = tmp_node->next;
	free(tmp_node);
}

static void	pop_b(t_stack *stack)
{
	t_node	*tmp_node;

	tmp_node = stack->b;
	stack->b = tmp_node->next;
	free(tmp_node);
}

void	pop(t_stack *stack, char c)
{
	if (c == 'a')
		pop_a(stack);
	else if (c == 'b')
		pop_b(stack);
	else
	{
		ft_putstr("Error28\n");
		free_stack(stack, 1);
	}
}
