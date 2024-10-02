/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:57:58 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:14:16 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

void	push_swap(t_stack *stack)
{
	int	i;

	i = stack->count - 1;
	while (i >= 0)
	{
		push(stack, ft_atoi(stack->arr[i]), 'a');
		i--;
	}
	sort_quick(stack);
}
