/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_quick.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:59:32 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:15:24 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

int	ft_get_middle(int *pivot, t_node *a, int size)
{
	int		*tmp;
	int		i;
	t_node	*tmp_a;

	tmp_a = a;
	tmp = (int *)malloc(sizeof(int) * size);
	i = size;
	if (!tmp)
		return (0);
	while (i--)
	{
		tmp[i] = tmp_a->data;
		tmp_a = tmp_a->next;
	}
	ft_sort_int_tmp(tmp, size);
	return (*pivot = tmp[size / 2], free(tmp), 1);
}

void	sort(t_stack *x, int len)
{
	int	a;
	int	b;
	int	c;

	if (len == 2 && x->a->data > x->a->next->data)
		sa(x, 1);
	if (len == 3)
	{
		a = x->a->data;
		b = x->a->next->data;
		c = x->a->next->next->data;
		if (a < b && b < c)
			return ;
		if (a < b && a > c)
			return (rra(x, 1), sort(x, 3));
		if (a > c && c > b)
			return (ra(x, 1), sort(x, 3));
		return (sa(x, 1), sort(x, 3));
	}
}

int	ft_quicksort_a(t_stack *stack, int len, int count)
{
	int	pivot;
	int	items;

	if (is_sorted_a(stack, len))
		return (1);
	items = len;
	if (len <= 3)
	{
		if (node_size(stack->a) == 3)
			return (sort(stack, 3), 1);
		return (sort_three_a(stack, len), 1);
	}
	if (!ft_get_middle(&pivot, stack->a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if (stack->a->data < pivot && (len--))
			pb(stack, 1);
		else if (++count)
			ra(stack, 1);
	}
	while (items / 2 + items % 2 != node_size(stack->a) && count--)
		rra(stack, 1);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0)
		&& ft_quicksort_b(stack, items / 2, 0));
}

int	ft_quicksort_b(t_stack *stack, int len, int count)
{
	int	pivot;
	int	items;

	if (!count && is_sorted_b(stack, len))
		while (len--)
			pa(stack, 1);
	if (len <= 3)
		return (sort_three_b(stack, len), 1);
	items = len;
	if (!ft_get_middle(&pivot, stack->b, len))
		return (0);
	while (len != items / 2)
	{
		if (stack->b->data >= pivot && len--)
			pa(stack, 1);
		else if (++count)
			rb(stack, 1);
	}
	while (items / 2 != node_size(stack->b) && count--)
		rrb(stack, 1);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0)
		&& ft_quicksort_b(stack, items / 2, 0));
}

void	sort_quick(t_stack *stack)
{
	int	c;

	c = stack->count;
	if (!is_sorted(stack))
	{
		if (c == 2)
			sa(stack, 1);
		else if (c == 3)
			sort_three_a(stack, 3);
		else
			ft_quicksort_a(stack, stack->count, 0);
	}
	while (stack->b)
	{
		pa(stack, 1);
	}
}
