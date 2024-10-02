/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:54:00 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:13:03 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void	free_double_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_node(t_node *node)
{
	if (node->next != NULL)
		free_node(node->next);
	free(node);
}

void	free_stack(t_stack *t, int x)
{
	if (t->has_split)
		free_double_array(t->arr);
	if (t->a)
		free_node(t->a);
	if (t->b)
		free_node(t->b);
	if (x == 1)
		exit(1);
}
