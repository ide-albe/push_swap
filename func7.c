/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:43:14 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack_a, int nargs)
{
	int	i;
	int	x;
	int	index;

	i = 0;
	while (i < nargs - 1)
	{
		x = 0;
		index = 0;
		while (x < nargs -1)
		{
			if (stack_a[i].valor >= stack_a[x].valor)
			{
				index++;
			}
			x++;
		}
		stack_a[i].index = index;
		i++;
	}
}

void	orderthreenum(t_stack *stack_a)
{
	if ((stack_a[0].index > stack_a[1].index)
		&& (stack_a[0].index < stack_a[2].index))
		sa(stack_a);
	else if ((stack_a[0].index > stack_a[1].index)
		&& (stack_a[0].index > stack_a[2].index)
		&& (stack_a[1].index > stack_a[2].index))
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((stack_a[0].index > stack_a[1].index)
		&& (stack_a[1].index < stack_a[2].index))
		ra(stack_a);
	else if ((stack_a[0].index < stack_a[1].index)
		&& (stack_a[0].index < stack_a[2].index)
		&& (stack_a[1].index > stack_a[2].index))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((stack_a[0].index < stack_a[1].index)
		&& (stack_a[1].index > stack_a[2].index))
		rra(stack_a);
}

t_stack	*stack_copy(t_stack *stack)
{
	int		i;
	t_stack	*stack_copy;

	i = 0;
	while (stack[i].index != '\0')
		i++;
	stack_copy = ft_calloc(8000, sizeof(t_stack));
	if (!stack_copy)
		return (NULL);
	i = 0;
	while (stack[i].index != '\0')
	{
		stack_copy[i].valor = stack[i].valor;
		stack_copy[i].index = stack[i].index;
		i++;
	}
	return (stack_copy);
}

int	max_indx(t_stack *stack)
{
	int		i;
	int		max;

	i = 0;
	max = 0;
	while (stack[i].index)
	{
		if (stack[i].index > max)
		{
			max = stack[i].index;
		}
		i++;
	}
	return (max);
}

int	min_indx(t_stack *stack)
{
	int		i;
	int		min;

	i = 0;
	min = max_indx(stack);
	while (stack[i].index)
	{
		if (stack[i].index < min)
		{
			min = stack[i].index;
		}
		i++;
	}
	return (min);
}
