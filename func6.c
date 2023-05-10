/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:36:09 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a)
{
	int	x;
	int	aux;
	int	auxindex;

	x = 0;
	while (stack_a[x].index)
		x++;
	x -= 1;
	aux = stack_a[x].valor;
	auxindex = stack_a[x].index;
	x -= 1;
	while (x >= 0)
	{
		stack_a[x + 1].valor = stack_a[x].valor;
		stack_a[x + 1].index = stack_a[x].index;
		x--;
	}
	stack_a[0].valor = aux;
	stack_a[0].index = auxindex;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack_b)
{
	int	x;
	int	aux;
	int	auxindex;

	x = 0;
	while (stack_b[x].index)
		x++;
	x -= 1;
	aux = stack_b[x].valor;
	auxindex = stack_b[x].index;
	x -= 1;
	while (x >= 0)
	{
		stack_b[x + 1].valor = stack_b[x].valor;
		stack_b[x + 1].index = stack_b[x].index;
		x--;
	}
	stack_b[0].valor = aux;
	stack_b[0].index = auxindex;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rrasim(stack_a);
	rrbsim(stack_b);
	ft_printf("rrr\n");
}
