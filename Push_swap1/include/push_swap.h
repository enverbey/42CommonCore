/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:13:40 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:10:22 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}t_node;

typedef struct s_stack
{
	char	**arr;
	t_node	*a;
	t_node	*b;
	int		has_split;
	int		count;
}t_stack;

//-> checker
int		check_equal(char **s);
int		check_int(char **s);
int		checker_push_swap(char **s);
int		check_number(char **s);
int		is_sorted(t_stack *stack);
int		is_sorted_a(t_stack *stack, int len);
int		is_sorted_b(t_stack *stack, int len);

//-> free
void	free_stack(t_stack *t, int x);
int		word_count(char *s, char c);

//->main
void	push_swap(t_stack *stack);

//->operators
void	pa(t_stack *stack, int print);
void	pb(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	rr(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	rrb(t_stack *stack, int print);
void	rrr(t_stack *stack, int print);
void	sa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);
void	stack_yazdir(t_stack *stack);

//->sort quick
void	sort_quick(t_stack *stack);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
void	sort_three_a(t_stack *s, int len);
void	sort_three_b(t_stack *s, int len);

//->utils in sort
int		node_size(t_node *node);
void	my_swap(int *a, int *b);
void	ft_sort_int_tmp(int *arr, int size);

//->stack
void	pop(t_stack *stack, char c);
void	push(t_stack *stack, int data, char c);
#endif