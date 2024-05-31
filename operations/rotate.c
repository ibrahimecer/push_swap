/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:20:40 by iecer             #+#    #+#             */
/*   Updated: 2024/05/17 15:24:16 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	ra(t_data *data, int flag)
{
	int	i;
	int	temp;

	i = 0;
	if (data->size_a > 1)
	{
		temp = data->a[0];
		while (i < data->size_a - 1)
		{
			data->a[i] = data->a[i + 1];
			++i;
		}
		data->a[i] = temp;
		if (flag == 0)
			write(1, "ra\n", 3);
	}
}

void	rb(t_data *data, int flag)
{
	int	i;
	int	temp;

	i = 0;
	if (data->size_b > 1)
	{
		temp = data->b[0];
		while (i < data->size_b - 1)
		{
			data->b[i] = data->b[i + 1];
			++i;
		}
		data->b[i] = temp;
		if (flag == 0)
			write(1, "rb\n", 3);
	}
}

void	rr(t_data *data)
{
	ra(data, 1);
	rb(data, 1);
	write(1, "rr\n", 3);
}
