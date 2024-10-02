/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:29:03 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/28 14:12:16 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

void	rrr(t_stack *stack, int print)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (print)
		ft_putstr("rrr\n");
}

void	rra(t_stack *stack, int print)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!stack->a || !stack->a->next)
		return ;
	tmp = stack->a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = stack->a;
	stack->a = tmp2;
	if (print)
		ft_putstr("rra\n");
}

void	rrb(t_stack *stack, int print)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!stack->b || !stack->b->next)
		return ;
	tmp = stack->b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = stack->b;
	stack->b = tmp2;
	if (print)
		ft_putstr("rrb\n");
}
