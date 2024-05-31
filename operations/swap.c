/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:42:32 by iecer             #+#    #+#             */
/*   Updated: 2024/05/17 15:24:19 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	sa(t_data *data, int flag)
{
	int	temp;

	if (data->size_a > 1)
	{
		temp = data->a[0];
		data->a[0] = data->a[1];
		data->a[1] = temp;
		if (flag == 0)
			write(1, "sa\n", 3);
	}
}

void	sb(t_data *data, int flag)
{
	int	temp;

	if (data->size_b > 1)
	{
		temp = data->b[0];
		data->b[0] = data->b[1];
		data->b[1] = temp;
		if (flag == 0)
			write(1, "sb\n", 3);
	}
}

void	ss(t_data *data)
{
	sa(data, 1);
	sb(data, 1);
	write(1, "ss\n", 3);
}
