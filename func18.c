/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func18.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 20:19:24 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ifargsnt2stack_b(t_stack *stack_b, int nargs)
{
	nargs = 0;
	stack_b = ft_calloc(1000, sizeof(t_stack));
	if (!stack_b)
	{
		ft_printf("\nMalloc error Stack_b");
		exit(EXIT_FAILURE);
	}
	return (stack_b);
}

void	controlderrores(t_stack *stcka, t_stack *stckb, char **args, int nargs)
{
	char	*lista;

	lista = ft_joinargs(nargs, args);
	nargs = ft_itsnum(lista) + 1;
	samevaluerror(stcka, nargs);
	assign_index(stcka, nargs);
	iforderror(stcka, nargs);
	allexcepthree(stcka, stckb);
	free(lista);
}

void	ifnoarg1(char **args)
{
	if (!args[1])
	{
		ft_printf("Error");
		exit(EXIT_FAILURE);
	}
}

void	ifonlypushswap(int nargs)
{
	if (nargs == 1)
	{
		exit(EXIT_FAILURE);
	}
}

void	push_swap(t_stack *stack_a, t_stack *stack_b, t_moves mvs)
{
	t_moves	cont;

	cont.ind = 0;
	while (stack_b[0].index)
	{
		cont.ind = lowest(stack_a, stack_b, mvs);
		sendthelowest(stack_a, stack_b, cont.ind);
	}
	lasthing(stack_a);
}
