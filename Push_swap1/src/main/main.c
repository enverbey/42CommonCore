/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:09:57 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:13:43 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../libft/include/libft.h"

int	main(int ac, char **av)
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	stack.has_split = 0;
	if (!(ac == 2 || ac > 2))
		return (0);
	if (ac == 2)
	{
		stack.arr = my_split(av[1], 32);
		if (!stack.arr)
			return (ft_printf("Error\n"), 1);
		stack.has_split = 1;
		stack.count = word_count(av[1], 32);
	}
	else
	{
		stack.arr = av + 1;
		stack.count = ac - 1;
	}
	if (!checker_push_swap(stack.arr))
		free_stack(&stack, 1);
	push_swap(&stack);
	free_stack(&stack, 0);
	return (0);
}
