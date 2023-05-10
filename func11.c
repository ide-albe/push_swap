/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:48:19 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ud(t_stack *stack_a, t_stack *stack_b, int ind)
{
	udrr(stack_a, stack_b, ind);
	if (ind > max_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			rra(stack_a);
		}
	}
	if (ind < min_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			rra(stack_a);
		}
	}
	udlastindx1(stack_a, ind);
	udlastindx2(stack_a, ind);
	pa(stack_a, stack_b);
}

int	uusimcpyw1(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves)
{
	while (ind < stackk_a[0].index && !(ind < min_indx(stackk_a)))
	{
		if (ind == stackk_b[0].index && ind < stackk_a[0].index)
		{
			while (ind == stackk_b[0].index && ind < stackk_a[0].index)
			{
				rasim(stackk_a);
				moves++;
			}
			break ;
		}
		rrsim(stackk_a, stackk_b);
		moves++;
		if (ind > stackk_a[0].index)
			break ;
	}
	return (moves);
}

int	uusimcpyw2(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves)
{
	while (ind > stackk_a[0].index && !(ind > max_indx(stackk_a)))
	{
		if (ind == stackk_b[0].index && ind > stackk_a[0].index)
		{
			while (ind == stackk_b[0].index && ind > stackk_a[0].index)
			{
				rasim(stackk_a);
				moves++;
			}
			break ;
		}
		rrsim(stackk_a, stackk_b);
		moves++;
		if (ind < stackk_a[0].index)
			break ;
	}
	return (moves);
}

int	uusimcpyif(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves)
{
	if (stackk_b[0].index != ind)
	{
		while (stackk_b[0].index != ind)
		{
			rbsim(stackk_b);
			moves++;
		}
	}
	if (ind > max_indx(stackk_a))
	{
		while (min_indx(stackk_a) != stackk_a[0].index)
		{
			rasim(stackk_a);
			moves++;
		}
	}
	if (ind < min_indx(stackk_a))
	{
		while (min_indx(stackk_a) != stackk_a[0].index)
		{
			rasim(stackk_a);
			moves++;
		}
	}
	return (moves);
}

int	uusimcpy(t_stack *stack_a, t_stack *stack_b, int ind)
{
	int		moves;
	t_stack	*stackk_a;
	t_stack	*stackk_b;

	moves = 0;
	stackk_a = stack_copy(stack_a);
	stackk_b = stack_copy(stack_b);
	while (ind)
	{
		moves += uusimcpyw1(stackk_a, stackk_b, ind, moves);
		moves += uusimcpyw2(stackk_a, stackk_b, ind, moves);
		break ;
	}
	moves += uusimcpyif(stackk_a, stackk_b, ind, moves);
	pasim(stackk_a, stackk_b);
	moves++;
	free(stackk_a);
	free(stackk_b);
	return (moves);
}
