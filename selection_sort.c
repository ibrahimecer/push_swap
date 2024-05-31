/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:25:18 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:48:28 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_value(int *nums, int size)
{
	int	i;
	int	index;
	int	min;

	i = 0;
	min = nums[0];
	index = 0;
	while (i < size)
	{
		if (nums[i] < min)
		{
			min = nums[i];
			index = i;
		}
		++i;
	}
	return (index);
}

void	apply_r_rr(t_data *data, int min_num, int index)
{
	if (index >= data->size_a / 2 + data->size_a % 2)
		while (data->a[0] != min_num && sorted_control(data) == 0)
			rra(data, 0);
	else
		while (data->a[0] != min_num && sorted_control(data) == 0)
			ra(data, 0);
}

void	selection_sorted(t_data *data)
{
	int	i;
	int	index;
	int	min_num;
	int	size;

	size = data->size_a;
	i = 0;
	while (i < size && sorted_control(data) == 0)
	{
		index = min_value(data->a, data->size_a);
		min_num = data->a[index];
		if (data->a[0] != min_num && data->size_a > 1)
			apply_r_rr(data, min_num, index);
		if (sorted_control(data) == 0)
			pb(data);
		++i;
	}
	while (data->size_b > 0)
		pa(data);
}
