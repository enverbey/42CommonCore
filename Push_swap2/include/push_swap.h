/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:47:43 by envyilma          #+#    #+#             */
/*   Updated: 2023/08/23 16:46:06 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int					data;
	int					order;
	struct s_stack		*next;
}t_stack_node;

typedef struct s_stack_head
{
	t_stack_node	*head_a;
	t_stack_node	*head_b;
}t_stack;

// -> check
int			check_equal(char **s);
int			check_int(char **s);
int			check_main(char **s);
int			check_number(char **s);
int			is_sorted(t_stack *stack);
// -> free
void		free_array(char **s2);
void		free_stack(t_stack *stack);
// -> libft
int			ft_atoi(char *str);
void		ft_putstr(char *str);
char		**ft_split(char const *s, char c);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *s);

// -> main
void		push_swap(char **av);

// -> operators
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		rr(t_stack *stack);
void		ra(t_stack *stack, int print);
void		rb(t_stack *stack, int print);
void		rrr(t_stack *stack);
void		rra(t_stack *stack, int print);
void		rrb(t_stack *stack, int print);
void		sa(t_stack *stack, int print);
void		sb(t_stack *stack, int print);

// -> radix with bite
void		radix_short_with_bite(t_stack *stack);
//->
void		pop_a(t_stack *stack);
void		pop_b(t_stack *stack);
void		push_a_order(t_stack *stack, int data);
void		push_a(t_stack *stack, int data, int order);
void		push_b(t_stack *stack, int data, int order);

#endif