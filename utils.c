/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:16:53 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:49:24 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ptrlen(char **temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		++i;
	}
	return (i);
}

void	is_repat_num(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size_a)
	{
		j = 0;
		while (j < data->size_a)
		{
			if ((data->a[i] == data->a[j]) && (i != j))
				exit_error(data, "Error\nRepeating number.");
			++j;
		}
		++i;
	}
}

int	sorted_control(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_a - 1)
	{
		if (data->a[i] > data->a[i + 1])
			return (0);
		++i;
	}
	return (1);
}

void	three_sort(t_data *s)
{
	if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] < s->a[2])
		sa(s, 0);
	if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[0] > s->a[2])
		ra(s, 0);
	if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
		rra(s, 0);
	if (s->a[0] > s->a[1] && s->a[1] > s->a[2] && s->a[0] > s->a[2])
	{
		ra(s, 0);
		sa(s, 0);
	}
	if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[0] < s->a[2])
	{
		sa(s, 0);
		ra(s, 0);
	}
}
