/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:20:38 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 15:32:49 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

void	ft_free(char **temp)
{
	size_t	i;

	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		++i;
	}
	free(temp);
}

void	ft_exit(t_data *data)
{
	if (data->temp)
		ft_free(data->temp);
	if (data->num)
		free(data->num);
	if (data->a)
		free(data->a);
	if (data->b)
		free(data->b);
	exit(1);
}

void	exit_error(t_data *data, char *str)
{
	ft_putstr_fd(str, 2);
	ft_exit(data);
}
