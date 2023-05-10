/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:55:14 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ddsimcpylast(t_stack *stackk_a, int ind, int moves)
{
	if (ind > last_indx(stackk_a) && !(ind > max_indx(stackk_a)))
	{
		while (ind > last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	if (ind < last_indx(stackk_a) && !(ind < min_indx(stackk_a)))
	{
		while (ind < last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	return (moves);
}

int	ddsimcpy(t_stack *stack_a, t_stack *stack_b, int ind)
{
	int		moves;
	t_stack	*stackk_a;
	t_stack	*stackk_b;

	moves = 0;
	stackk_a = stack_copy(stack_a);
	stackk_b = stack_copy(stack_b);
	moves += ddsimcpyrr(stackk_a, stackk_b, ind, moves);
	moves += ddsimcpyminmax(stackk_a, ind, moves);
	moves += ddsimcpylast(stackk_a, ind, moves);
	pasim(stackk_a, stackk_b);
	moves++;
	free(stackk_a);
	free(stackk_b);
	return (moves);
}

int	udsimcpyrr(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves)
{
	while (ind != stackk_b[0].index && ind < stackk_a[0].index)
	{
		rrsim(stackk_a, stackk_b);
		moves++;
	}
	while (ind != stackk_b[0].index && ind > stackk_a[0].index)
	{
		rrsim(stackk_a, stackk_b);
		moves++;
	}
	if (stackk_b[0].index != ind)
	{
		while (stackk_b[0].index != ind)
		{
			rbsim(stackk_b);
			moves++;
		}
	}
	return (moves);
}

int	udsimcpyminmax(t_stack *stackk_a, int ind, int moves)
{
	if (ind > max_indx(stackk_a))
	{
		while (min_indx(stackk_a) != stackk_a[0].index)
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	if (ind < min_indx(stackk_a))
	{
		while (min_indx(stackk_a) != stackk_a[0].index)
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	return (moves);
}

int	udsimcpylast1(t_stack *stackk_a, int ind, int moves)
{
	if (ind > last_indx(stackk_a) && !(ind > max_indx(stackk_a))
		&& ind > last_indx(stackk_a))
	{
		while (ind > last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	if (ind < last_indx(stackk_a) && !(ind > max_indx(stackk_a))
		&& ind < last_indx(stackk_a))
	{
		while (ind > last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	return (moves);
}
