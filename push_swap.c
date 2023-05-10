/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:48:47 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 20:17:29 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int nargs, char **args)
{
	t_cont	cont;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_moves	mvs;

	stack_a = NULL;
	stack_b = NULL;
	mvs = valores();
	ifonlypushswap(nargs);
	if (nargs == 2)
	{
		ifarg1(args);
		stack_a = quotationerror(args, stack_a);
		stack_b = quotationerror_stack_b(args, stack_b);
		allexcepthree(stack_a, stack_b);
	}
	if (nargs != 2)
	{
		ifnoarg1(args);
		stack_a = ifargsnt2stack_a(stack_a, args, nargs, cont.i);
		stack_b = ifargsnt2stack_b(stack_b, nargs);
		controlderrores(stack_a, stack_b, args, nargs);
	}
	push_swap(stack_a, stack_b, mvs);
}
