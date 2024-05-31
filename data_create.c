/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:03:10 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:44:47 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

int	ft_atoi_ps(t_data *s, char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str == '\0')
		exit_error(s, "Error\n");
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			exit_error(s, "Error\n");
		result = (result * 10) + (*str - '0');
		if ((result * sign < -2147483648 || result * sign > 2147483647))
			exit_error(s, "Error\n");
		str++;
	}
	return (sign * result);
}

void	data_create(char **temp, t_data *data)
{
	int	i;

	i = 0;
	data->size_a = ptrlen(temp);
	if (data->size_a < 1)
		exit_error(data, "Error\nNo number");
	data->a = (int *)malloc(sizeof(int) * data->size_a);
	if (!data->a)
		exit_error(data, "Error\nMalloc failed.");
	data->b = (int *)malloc(sizeof(int) * data->size_a);
	if (!data->b)
		exit_error(data, "Error\nMalloc failed.");
	while (temp[i])
	{
		data->num = ft_strtrim(temp[i], " ");
		if (!data->num)
			exit_error(data, "Error\n");
		data->a[i] = ft_atoi_ps(data, data->num);
		free(data->num);
		data->num = NULL;
		++i;
	}
	is_repat_num(data);
}
