/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3 copy 16.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 20:12:10 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	ft_atoi2(const char *str)
{
	int		i;
	int		sign;
	double	num;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}

void	samevaluerror(t_stack *stack_a, int nargs)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (i < nargs - 1 && !found)
	{
		j = i + 1;
		while (j < nargs - 1 && !found)
		{
			if (stack_a[i].valor == stack_a[j].valor)
			{
				found = 1;
				ft_printf("Error");
				exit (EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	iforderror(t_stack *stack_a, int nargs)
{
	int	i;
	int	index;

	i = 0;
	index = i + 1;
	while (i < nargs - 1 && stack_a[i].index == index)
	{
		index++;
		i++;
		if (i == (nargs - 1))
		{
			exit(EXIT_FAILURE);
		}
	}
}

int	reservanum(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0')
	{
		j++;
		if (str[j] == ' ')
		{
			i -= 1;
		}
	}
	return (i);
}

void	quotationerror1(t_stack *stack_a, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		samevaluerror(stack_a, j);
		assign_index(stack_a, j);
		iforderror(stack_a, (j + 1));
		j++;
	}
}
