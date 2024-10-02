/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:18:57 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:15:37 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three_a(t_stack *s, int len)
{
	while (len == 2 || !is_sorted_a(s, 3))
	{
		if (s->a->data > s->a->next->data)
			sa(s, 1);
		else if (len == 3)
		{
			ra(s, 1);
			sa(s, 1);
			rra(s, 1);
		}
		if (len == 2)
			return ;
	}
}

void	sort_three_b_cont(t_stack *s, int len)
{
	while (len)
	{
		if (len == 1 && s->a->data > s->a->next->data)
			sa(s, 1);
		else if (len == 1 || (len >= 2 && s->b->data > s->b->next->data) \
			|| (len == 3 && s->b->data > s->b->next->next->data))
		{
			pa(s, 1);
			len--;
		}
		else
			sb(s, 1);
	}
}

void	sort_three_b(t_stack *s, int len)
{
	if (len == 1)
		return (pa(s, 1));
	else if (len == 2)
	{
		if (s->b->data < s->b->next->data)
			sb(s, 1);
		while (len--)
			pa(s, 1);
	}
	else if (len == 3)
		sort_three_b_cont(s, len);
	return ;
}
