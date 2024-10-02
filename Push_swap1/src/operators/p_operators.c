/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:43:28 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/28 14:14:10 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

void	pa(t_stack *stack, int print)
{
	if (!stack->b)
		return ;
	push(stack, stack->b->data, 'a');
	pop(stack, 'b');
	if (print)
		ft_putstr("pa\n");
}

void	pb(t_stack *stack, int print)
{
	if (!stack->a)
		return ;
	push(stack, stack->a->data, 'b');
	pop(stack, 'a');
	if (print)
		ft_putstr("pb\n");
}
