/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:45:11 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	uuwhile1(t_stack *stack_a, t_stack *stack_b, int ind)
{
	while (ind < stack_a[0].index && !(ind < min_indx(stack_a)))
	{
		if (ind == stack_b[0].index && ind < stack_a[0].index)
		{
			while (ind == stack_b[0].index && ind < stack_a[0].index)
			{
				ra(stack_a);
			}
			break ;
		}
		rr(stack_a, stack_b);
		if (ind > stack_a[0].index)
			break ;
	}
}

void	uuwhile2(t_stack *stack_a, t_stack *stack_b, int ind)
{
	while (ind)
	{
		uuwhile1(stack_a, stack_b, ind);
		while (ind > stack_a[0].index && !(ind > max_indx(stack_a)))
		{
			if (ind == stack_b[0].index && ind > stack_a[0].index)
			{
				while (ind == stack_b[0].index && ind > stack_a[0].index)
				{
					ra(stack_a);
				}
				break ;
			}
			rr(stack_a, stack_b);
			if (ind < stack_a[0].index)
				break ;
		}
		break ;
	}
}

void	uu(t_stack *stack_a, t_stack *stack_b, int ind)
{
	uuwhile2(stack_a, stack_b, ind);
	if (stack_b[0].index != ind)
	{
		while (stack_b[0].index != ind)
		{
			rb(stack_b);
		}
	}
	if (ind > max_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			ra(stack_a);
		}
	}
	if (ind < min_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			ra(stack_a);
		}
	}
	pa(stack_a, stack_b);
}

void	duif(t_stack *stack_a, int ind)
{
	if (ind < stack_a[0].index && !(ind < min_indx(stack_a)))
	{
		while (ind < stack_a[0].index)
		{
			ra(stack_a);
		}
	}
	if (ind > stack_a[0].index && !(ind > max_indx(stack_a)))
	{
		while (ind > stack_a[0].index)
		{
			ra(stack_a);
		}
	}
}

void	du(t_stack *stack_a, t_stack *stack_b, int ind)
{
	while (ind != stack_b[0].index)
	{
		rrb(stack_b);
	}
	if (ind > max_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			ra(stack_a);
		}
	}
	if (ind < min_indx(stack_a))
	{
		while (min_indx(stack_a) != stack_a[0].index)
		{
			ra(stack_a);
		}
	}
	duif(stack_a, ind);
	pa(stack_a, stack_b);
}
