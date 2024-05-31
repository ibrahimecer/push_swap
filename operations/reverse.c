/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:32:50 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:49:43 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	rra(t_data *data, int flag)
{
	int	i;
	int	temp;

	if (data->size_a > 0)
	{
		i = data->size_a - 1;
		temp = data->a[i];
		while (i > 0)
		{
			data->a[i] = data->a[i - 1];
			i--;
		}
		data->a[0] = temp;
		if (flag == 0)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_data *data, int flag)
{
	int	i;
	int	temp;

	if (data->size_b > 0)
	{
		i = data->size_b - 1;
		temp = data->b[i];
		while (i > 0)
		{
			data->b[i] = data->b[i - 1];
			i--;
		}
		data->b[0] = temp;
		if (flag == 0)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_data *data)
{
	rra(data, 1);
	rrb(data, 1);
	write(1, "rrr\n", 4);
}
