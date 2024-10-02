/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:23 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:01:46 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include "./src/libft/include/libft.h"

int	sort_for_check(t_stack *stack, char *op)
{
	if (!ft_strncmp(op, "sa\n", 3))
		sa(stack, 0);
	else if (!ft_strncmp(op, "sb\n", 3))
		sb(stack, 0);
	else if (!ft_strncmp(op, "pa\n", 3))
		pa(stack, 0);
	else if (!ft_strncmp(op, "pb\n", 3))
		pb(stack, 0);
	else if (!ft_strncmp(op, "ra\n", 3))
		ra(stack, 0);
	else if (!ft_strncmp(op, "rb\n", 3))
		rb(stack, 0);
	else if (!ft_strncmp(op, "rr\n", 3))
		rr(stack, 0);
	else if (!ft_strncmp(op, "rra\n", 4))
		rra(stack, 0);
	else if (!ft_strncmp(op, "rrb\n", 4))
		rrb(stack, 0);
	else if (!ft_strncmp(op, "rrr\n", 4))
		rrr(stack, 0);
	else
		return (0);
	return (1);
}

void	checker_sort_control(t_stack *stack)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		if (!sort_for_check(stack, op))
		{
			if (op)
				free(op);
			ft_printf("\033[0;31mKO\n\033[0;0m");
			free_stack(stack, 1);
		}
		free(op);
		op = get_next_line(0);
	}
	if (is_sorted(stack) && !stack->b)
		ft_printf("\033[0;32mOK\n\033[0;0m");
	else
		ft_printf("\033[0;31mKO\n\033[0;0m");
}

void	function(t_stack *stack)
{
	int	i;

	i = stack->count - 1;
	while (i >= 0)
	{
		push(stack, ft_atoi(stack->arr[i]), 'a');
		i--;
	}
	checker_sort_control(stack);
	free_stack(stack, 0);
}

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
	function(&stack);
	return (0);
}
