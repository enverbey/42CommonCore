/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:07:43 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/11/05 23:10:09 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	node_size(t_node *node)
{
	int		i;
	t_node	*lst;

	lst = node;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	my_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_int_tmp(int *arr, int size)
{
	int	i;

	while (size >= 0)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (arr[i] > arr[i + 1])
				my_swap(&arr[i], &arr[i + 1]);
		}
		size--;
	}
}
