/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:32:39 by iecer             #+#    #+#             */
/*   Updated: 2024/05/23 14:55:49 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_data
{
	char	**temp;
	char	*num;
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_data;

void	sa(t_data *data, int flag);
void	sb(t_data *data, int flag);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data, int flag);
void	rb(t_data *data, int flag);
void	rr(t_data *data);
void	rra(t_data *data, int flag);
void	rrr(t_data *data);
void	rrb(t_data *data, int flag);

int		ptrlen(char **temp);
void	ft_free(char **temp);
void	exit_error(t_data *data, char *str);
void	ft_exit(t_data *data);
void	is_repat_num(t_data *data);
void	data_create(char **temp, t_data *data);
int		sorted_control(t_data *data);
void	three_sort(t_data *s);
void	selection_sorted(t_data *data);
void	radix_sort(t_data *data);
void	index_stack(int *stack, int size, t_data *s);

#endif
