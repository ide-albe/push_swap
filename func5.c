/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 19:34:46 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pbif(t_stack *stack_a, t_stack *stack_b, int i, int j)
{
	int	x;

	x = 0;
	if (j != 0)
	{
		while (i > 0)
		{
			stack_b[i].valor = stack_b[i - 1].valor;
			stack_b[i].index = stack_b[i - 1].index;
			i--;
		}
		stack_b[0].valor = stack_a[0].valor;
		stack_b[0].index = stack_a[0].index;
		while (x < j)
		{
		stack_a[x].valor = stack_a[x + 1].valor;
		stack_a[x].index = stack_a[x + 1].index;
		x++;
		}
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[j].index)
		j++;
	while (stack_b[i].index)
		i++;
	pbif(stack_a, stack_b, i, j);
	ft_printf("pb\n");
}

void	ra(t_stack	*stack_a)
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
	ft_printf("ra\n");
}

void	rb(t_stack	*stack_b)
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
	ft_printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rasim(stack_a);
	rbsim(stack_b);
	ft_printf("rr\n");
}
