/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:06:44 by iecer             #+#    #+#             */
/*   Updated: 2024/05/17 15:24:03 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	pa(t_data *data)
{
	int	i;

	if (data->size_b > 0)
	{
		i = data->size_a;
		while (i > 0)
		{
			data->a[i] = data->a[i - 1];
			i--;
		}
		data->a[0] = data->b[0];
		i = 0;
		while (i < data->size_b - 1)
		{
			data->b[i] = data->b[i + 1];
			i++;
		}
		data->size_a++;
		data->size_b--;
		write(1, "pa\n", 3);
	}
}

void	pb(t_data *data)
{
	int	i;

	if (data->size_a > 0)
	{
		i = data->size_b;
		while (i > 0)
		{
			data->b[i] = data->b[i - 1];
			i--;
		}
		data->b[0] = data->a[0];
		i = 0;
		while (i < data->size_a - 1)
		{
			data->a[i] = data->a[i + 1];
			i++;
		}
		data->size_a--;
		data->size_b++;
		write(1, "pb\n", 3);
	}
}
