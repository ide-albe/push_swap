/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:46:28 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ddif(t_stack *stack_a, int ind)
{
	if (ind < min_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			rra(stack_a);
		}
	}
	if (ind > last_indx(stack_a) && !(ind > max_indx(stack_a)))
	{
		while (ind > last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
	if (ind < last_indx(stack_a) && !(ind < min_indx(stack_a)))
	{
		while (ind < last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
}

void	dd(t_stack *stack_a, t_stack *stack_b, int ind)
{
	while (ind != stack_b[0].index && ind < stack_a[0].index)
	{
		rrr(stack_a, stack_b);
	}
	while (ind != stack_b[0].index && ind > stack_a[0].index)
	{
		rrr(stack_a, stack_b);
	}
	if (stack_b[0].index != ind)
	{
		while (stack_b[0].index != ind)
		{
			rrb(stack_b);
		}
	}
	if (ind > max_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			rra(stack_a);
		}
	}
	ddif(stack_a, ind);
	pa(stack_a, stack_b);
}

void	udrr(t_stack *stack_a, t_stack *stack_b, int ind)
{
	while (ind != stack_b[0].index && ind < stack_a[0].index)
	{
		rr(stack_a, stack_b);
	}
	while (ind != stack_b[0].index && ind > stack_a[0].index)
	{
		rr(stack_a, stack_b);
	}
	if (stack_b[0].index != ind)
	{
		while (stack_b[0].index != ind)
		{
			rb(stack_b);
		}
	}
}

void	udlastindx1(t_stack *stack_a, int ind)
{
	if (ind > last_indx(stack_a) && !(ind > max_indx(stack_a))
		&& ind > last_indx(stack_a))
	{
		while (ind > last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
	if (ind < last_indx(stack_a) && !(ind > max_indx(stack_a))
		&& ind < last_indx(stack_a))
	{
		while (ind > last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
}

void	udlastindx2(t_stack *stack_a, int ind)
{
	if (ind < last_indx(stack_a) && !(ind < min_indx(stack_a))
		&& ind < last_indx(stack_a))
	{
		while (ind < last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
	if (ind > last_indx(stack_a) && !(ind < min_indx(stack_a))
		&& ind > last_indx(stack_a))
	{
		while (ind < last_indx(stack_a))
		{
			rra(stack_a);
		}
	}
}
