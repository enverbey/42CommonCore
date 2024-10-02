/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:14:38 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:16:15 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

static void	push_a(t_stack *stack, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (ft_putstr("Error malloc\n"), free_stack(stack, 1));
	new_node->data = data;
	new_node->next = NULL;
	if (stack->a != NULL)
		new_node->next = stack->a;
	stack->a = new_node;
}

static void	push_b(t_stack *stack, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (ft_putstr("Error malloc\n"), free_stack(stack, 1));
	new_node->data = data;
	new_node->next = NULL;
	if (stack->b != NULL)
		new_node->next = stack->b;
	stack->b = new_node;
}

void	push(t_stack *stack, int data, char c)
{
	if (c == 'a')
		push_a(stack, data);
	else if (c == 'b')
		push_b(stack, data);
	else
	{
		ft_putstr("Error29\n");
		free_stack(stack, 1);
	}
}
