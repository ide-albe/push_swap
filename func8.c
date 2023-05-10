/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:44:12 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	last_indx(t_stack *stack)
{
	int		i;
	int		last;

	i = 0;
	last = 0;
	while (stack[i].index)
	{
		if (stack[i].index)
		{
			last = stack[i].index;
		}
		i++;
	}
	return (last);
}

void	allexcepthree(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (stack_a[i].index)
	{
		if (i >= 3)
		{
			pb(stack_a, stack_b);
			i = 0;
		}
		i++;
	}
	orderthreenum(stack_a);
}
