/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:33:20 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
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
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
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
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}

void	paif(t_stack *stack_a, t_stack *stack_b, int i, int j)
{
	int	x;

	x = 0;
	if (j != 0)
	{
		while (i > 0)
		{
			stack_a[i].valor = stack_a[i - 1].valor;
			stack_a[i].index = stack_a[i - 1].index;
			i--;
		}
		stack_a[0].valor = stack_b[0].valor;
		stack_a[0].index = stack_b[0].index;
		while (x < j)
		{
		stack_b[x].valor = stack_b[x + 1].valor;
		stack_b[x].index = stack_b[x + 1].index;
		x++;
		}
	}
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_b[j].index)
		j++;
	while (stack_a[i].index)
		i++;
	paif(stack_a, stack_b, i, j);
	ft_printf("pa\n");
}
