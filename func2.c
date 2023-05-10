/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:26:43 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:31:20 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rasim(t_stack	*stack_a)
{
	int	i;
	int	x;
	int	aux;
	int	auxindex;

	i = 0;
	x = 0;
	aux = stack_a[0].valor;
	auxindex = stack_a[0].index;
	while (stack_a[x].index)
		x++;
	while (stack_a[i].index)
	{
		stack_a[i].valor = stack_a[i + 1].valor;
		stack_a[i].index = stack_a[i + 1].index;
		i++;
	}
	stack_a[x - 1].valor = aux;
	stack_a[x - 1].index = auxindex;
}

void	rbsim(t_stack	*stack_b)
{
	int	i;
	int	x;
	int	aux;
	int	auxindex;

	i = 0;
	x = 0;
	aux = stack_b[0].valor;
	auxindex = stack_b[0].index;
	while (stack_b[x].index)
		x++;
	while (stack_b[i].index)
	{
		stack_b[i].valor = stack_b[i + 1].valor;
		stack_b[i].index = stack_b[i + 1].index;
		i++;
	}
	stack_b[x - 1].valor = aux;
	stack_b[x - 1].index = auxindex;
}

void	rrsim(t_stack *stack_a, t_stack *stack_b)
{
	rasim(stack_a);
	rbsim(stack_b);
}

void	rrasim(t_stack *stack_a)
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
}

void	rrbsim(t_stack *stack_b)
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
}
