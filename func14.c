/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 20:19:12 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	udsimcpylast2(t_stack *stackk_a, int ind, int moves)
{
	if (ind < last_indx(stackk_a) && !(ind < min_indx(stackk_a))
		&& ind < last_indx(stackk_a))
	{
		while (ind < last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	if (ind > last_indx(stackk_a) && !(ind < min_indx(stackk_a))
		&& ind > last_indx(stackk_a))
	{
		while (ind < last_indx(stackk_a))
		{
			rrasim(stackk_a);
			moves++;
		}
	}
	return (moves);
}

int	udsimcpy(t_stack *stack_a, t_stack *stack_b, int ind)
{
	int		moves;
	t_stack	*stackk_a;
	t_stack	*stackk_b;

	moves = 0;
	stackk_a = stack_copy(stack_a);
	stackk_b = stack_copy(stack_b);
	moves += udsimcpyrr(stackk_a, stackk_b, ind, moves);
	moves += udsimcpyminmax(stackk_a, ind, moves);
	moves += udsimcpylast1(stackk_a, ind, moves);
	moves += udsimcpylast2(stackk_a, ind, moves);
	pasim(stackk_a, stackk_b);
	moves++;
	free(stackk_a);
	free(stackk_b);
	return (moves);
}

t_moves	lowestmvs(t_stack *stack_a, t_stack *stack_b, int ind, t_moves mvs)
{
	mvs.moves1 = uusimcpy(stack_a, stack_b, ind);
	mvs.moves2 = udsimcpy(stack_a, stack_b, ind);
	mvs.moves3 = dusimcpy(stack_a, stack_b, ind);
	mvs.moves4 = ddsimcpy(stack_a, stack_b, ind);
	return (mvs);
}

t_moves	valores(void)
{
	t_moves	mvs;

	mvs.i = 0;
	mvs.contindx = 0;
	mvs.lowermoves = 0;
	mvs.movbajo = 500;
	return (mvs);
}

int	lowest(t_stack *stack_a, t_stack *stack_b, t_moves mvs)
{
	while (stack_b[mvs.contindx].index)
	{
		mvs.ind = stack_b[mvs.contindx].index;
		mvs = lowestmvs(stack_a, stack_b, mvs.ind, mvs);
		if (mvs.moves1 < mvs.movbajo)
			mvs.lowermoves = stack_b[mvs.contindx].index;
		if (mvs.moves1 < mvs.movbajo)
			mvs.movbajo = mvs.moves1;
		if (mvs.moves2 < mvs.movbajo)
			mvs.lowermoves = stack_b[mvs.contindx].index;
		if (mvs.moves2 < mvs.movbajo)
			mvs.movbajo = mvs.moves2;
		if (mvs.moves3 < mvs.movbajo)
			mvs.lowermoves = stack_b[mvs.contindx].index;
		if (mvs.moves3 < mvs.movbajo)
			mvs.movbajo = mvs.moves3;
		if (mvs.moves4 < mvs.movbajo)
			mvs.lowermoves = stack_b[mvs.contindx].index;
		if (mvs.moves4 < mvs.movbajo)
			mvs.movbajo = mvs.moves4;
		mvs.contindx++;
	}
	return (mvs.lowermoves);
}
