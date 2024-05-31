/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:34:02 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:51:11 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	init_data(t_data *data)
{
	data->a = NULL;
	data->b = NULL;
	data->num = NULL;
	data->temp = NULL;
	data->size_a = 0;
	data->size_b = 0;
}

void	sort_algrt(t_data *data)
{
	if (sorted_control(data) == 0)
	{
		if (data->size_a == 2)
			sa(data, 0);
		else if (data->size_a == 3)
			three_sort(data);
		else if (data->size_a <= 32)
			selection_sorted(data);
		else
		{
			index_stack(data->a, data->size_a, data);
			radix_sort(data);
		}
	}
}

int	main(int arc, char **arg)
{
	t_data	data;

	if (arc == 1)
		return (0);
	arg++;
	init_data(&data);
	if (arc == 2)
	{
		data.temp = ft_split(arg[0], ' ');
		if (!data.temp)
			exit_error(&data, "Error\nMalloc failed.");
		data_create(data.temp, &data);
	}
	else
		data_create(arg, &data);
	sort_algrt(&data);
	ft_exit(&data);
}
