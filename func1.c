/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:23:06 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:28:04 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sasim(t_stack *stack_a)
{
	int	i;
	int	aux;
	int	auxindex;

	i = 0;
	while (stack_a[i].index)
	{
		i++;
	}
	if (i > 1)
	{
		aux = stack_a[0].valor;
		stack_a[0].valor = stack_a[1].valor;
		stack_a[1].valor = aux;
		auxindex = stack_a[0].index;
		stack_a[0].index = stack_a[1].index;
		stack_a[1].index = auxindex;
	}
}

void	sbsim(t_stack *stack_b)
{
	int	i;
	int	aux;
	int	auxindex;

	i = 0;
	while (stack_b[i].index)
	{
		i++;
	}
	if (i > 1)
	{
		aux = stack_b[0].valor;
		stack_b[0].valor = stack_b[1].valor;
		stack_b[1].valor = aux;
		auxindex = stack_b[0].index;
		stack_b[0].index = stack_b[1].index;
		stack_b[1].index = auxindex;
	}
}

void	sssim(t_stack *stack_a, t_stack *stack_b)
{
	sasim(stack_a);
	sbsim(stack_b);
}

void	pasim(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	x;
	int	j;

	i = 0;
	x = 0;
	j = 0;
	while (stack_b[j].index)
		j++;
	while (stack_a[i].index)
		i++;
	if (j != 0)
	{
		while (i > 0)
		{
			stack_a[i].index = stack_a[i - 1].index;
			i--;
		}
		stack_a[0].index = stack_b[0].index;
		while (x < j)
		{
		stack_b[x].index = stack_b[x + 1].index;
		x++;
		}
	}
}

void	pbsim(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	x;
	int	j;

	i = 0;
	x = 0;
	j = 0;
	while (stack_a[j].index)
		j++;
	while (stack_b[i].index)
		i++;
	if (j != 0)
	{
		while (i > 0)
		{
			stack_b[i].index = stack_b[i - 1].index;
			i--;
		}
		stack_b[0].index = stack_a[0].index;
		while (x < j)
		{
		stack_a[x].index = stack_a[x + 1].index;
		x++;
		}
	}
}
