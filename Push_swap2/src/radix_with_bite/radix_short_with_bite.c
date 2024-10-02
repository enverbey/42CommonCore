/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_short_with_bite.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 01:46:08 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 15:51:33 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_size_stack_a(t_stack *stack)
{
	int				size;
	t_stack_node	*a;

	if (!stack->head_a)
		return (0);
	size = 1;
	a = stack->head_a;
	while (stack->head_a && a->next)
	{
		a = a->next;
		size++;
	}
	return (size);
}

int	ft_size_stack_b(t_stack *stack)
{
	int				size;
	t_stack_node	*b;

	if (!stack->head_b)
		return (0);
	size = 1;
	b = stack->head_b;
	while (stack->head_b && b->next)
	{
		b = b->next;
		size++;
	}
	return (size);
}

void	bite_compare_a(t_stack *stack, int c)
{
	int				size_zero;
	int				i;

	size_zero = ft_size_stack_a(stack);
	while (stack->head_a && size_zero > 0 && !is_sorted(stack))
	{
		i = stack->head_a->order & c;
		if (i == 0)
			pb(stack);
		else
			ra(stack, 1);
		size_zero--;
	}
}

void	bite_compare_b(t_stack *stack, int c)
{
	int				size_zero;
	int				i;

	size_zero = ft_size_stack_b(stack);
	while (stack->head_b && size_zero > 0 && !is_sorted(stack))
	{
		i = stack->head_b->order & c;
		if (i == c)
			pa(stack);
		else
			rb(stack, 1);
		size_zero--;
	}
}

void	radix_short_with_bite(t_stack *stack)
{
	int	c;

	c = 1;
	while (!is_sorted(stack))
	{
		bite_compare_a(stack, c);
		c = c << 1;
		bite_compare_b(stack, c);
	}
	while (stack->head_b)
		pa(stack);
}
