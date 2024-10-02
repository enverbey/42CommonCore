/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:02:11 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/28 14:11:51 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

void	rr(t_stack *stack, int print)
{
	ra(stack, 0);
	rb(stack, 0);
	if (print)
		ft_putstr("rr\n");
}

void	ra(t_stack *stack, int print)
{
	t_node	*temp;
	t_node	*temp2;

	temp2 = stack->a;
	temp = stack->a;
	if (!stack->a || !stack->a->next)
		return ;
	stack->a = stack->a->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = 0;
	if (print)
		ft_putstr("ra\n");
}

void	rb(t_stack *stack, int print)
{
	t_node	*temp;
	t_node	*temp2;

	temp2 = stack->b;
	temp = stack->b;
	if (!stack->b || !stack->b->next)
		return ;
	stack->b = stack->b->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = 0;
	if (print)
		ft_putstr("rb\n");
}
