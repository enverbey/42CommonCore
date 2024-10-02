/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:45:53 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/29 13:12:23 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_sorted_a(t_stack *stack, int len)
{
	t_node	*a;

	a = stack->a;
	while (--len)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

int	is_sorted_b(t_stack *stack, int len)
{
	t_node	*lst;

	lst = stack->b;
	while (--len)
	{
		if (lst->data < lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	is_sorted(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	a = stack->a;
	b = stack->b;
	if ((a && b) && (a->data < b->data))
		return (0);
	while (stack->b && b->next)
	{
		if (b->data < b->next->data)
			return (0);
		b = b->next;
	}
	while (stack->a && a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}
