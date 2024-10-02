/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_operators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:57:26 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/10/28 14:12:39 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

void	sa(t_stack *stack, int print)
{
	int	tmp;

	if (!stack->a || !stack->a->next)
		return ;
	tmp = stack->a->data;
	stack->a->data = stack->a->next->data;
	stack->a->next->data = tmp;
	if (print)
		ft_putstr("sa\n");
}

void	sb(t_stack *stack, int print)
{
	int	tmp;

	if (!stack->b || !stack->b->next)
		return ;
	tmp = stack->b->data;
	stack->b->data = stack->b->next->data;
	stack->b->next->data = tmp;
	if (print)
		ft_putstr("sb\n");
}
