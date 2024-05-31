/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:01:47 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 16:27:36 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

int	get_next_min_index(int *stack, int size, int *visited)
{
	int	min_index;
	int	min_value;
	int	i;

	min_index = -1;
	min_value = 0;
	i = 0;
	while (i < size)
	{
		if (!visited[i] && (min_index == -1 || stack[i] < min_value))
		{
			min_index = i;
			min_value = stack[i];
		}
		i++;
	}
	return (min_index);
}

void	index_stack(int *stack, int size, t_data *s)
{
	int	*visited;
	int	index;
	int	min_index;

	index = 0;
	visited = (int *)ft_calloc(size, sizeof(int));
	if (!visited)
		exit_error(s, "Error\nMemory allocation failed");
	min_index = get_next_min_index(stack, size, visited);
	while (min_index != -1)
	{
		stack[min_index] = index++;
		visited[min_index] = 1;
		min_index = get_next_min_index(stack, size, visited);
	}
	free(visited);
}

int	max_bit(t_data *data)
{
	int	i;
	int	bit_count;
	int	max_num;

	i = 0;
	max_num = data->a[0];
	bit_count = 0;
	while (i < data->size_a)
	{
		if (max_num < data->a[i])
			max_num = data->a[i];
		++i;
	}
	while ((max_num >> bit_count) != 0)
		++bit_count;
	return (bit_count);
}

void	sort_b(t_data *data, int bit)
{
	int	i;
	int	size;

	i = 0;
	size = data->size_b;
	while (i < size)
	{
		if (((data->b[0] >> bit) & 1) == 1)
			pa(data);
		else
			rb(data, 0);
		++i;
	}
}

void	radix_sort(t_data *data)
{
	int	i;
	int	j;
	int	bit;
	int	size;

	i = 0;
	bit = max_bit(data);
	while (i < bit && sorted_control(data) == 0)
	{
		j = 0;
		size = data->size_a;
		while (j < size && sorted_control(data) == 0)
		{
			if (((data->a[0] >> i) & 1) == 1)
				ra(data, 0);
			else
				pb(data);
			++j;
		}
		if (i + 1 <= bit)
			sort_b(data, i + 1);
		++i;
	}
	while (data->size_b > 0)
		pa(data);
}
