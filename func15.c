/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func15.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:29:02 by ide-albe          #+#    #+#             */
/*   Updated: 2023/03/03 20:11:00 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sendthelowest(t_stack *stack_a, t_stack *stack_b, int ind)
{
	int	moves1;
	int	moves2;
	int	moves3;
	int	moves4;

	moves1 = uusimcpy(stack_a, stack_b, ind);
	moves2 = udsimcpy(stack_a, stack_b, ind);
	moves3 = dusimcpy(stack_a, stack_b, ind);
	moves4 = ddsimcpy(stack_a, stack_b, ind);
	if ((moves1 <= moves2 && moves1 <= moves3 && moves1 <= moves4))
	{
		uu(stack_a, stack_b, ind);
	}
	else if ((moves2 <= moves1 && moves2 <= moves3 && moves2 <= moves4))
	{
		ud(stack_a, stack_b, ind);
	}
	else if ((moves3 <= moves1 && moves3 <= moves2 && moves3 <= moves4))
	{
		du(stack_a, stack_b, ind);
	}
	else if ((moves4 <= moves1 && moves4 <= moves2 && moves4 <= moves3))
	{
		dd(stack_a, stack_b, ind);
	}
}

void	lasthing(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[j].index)
		j++;
	j = j / 2;
	while (stack_a[i].index != min_indx(stack_a))
	{
		i++;
	}
	if (i <= j)
	{
		while (min_indx(stack_a) != stack_a[0].index)
			ra(stack_a);
	}
	if (i > j)
	{
		while (min_indx(stack_a) != stack_a[0].index)
			rra(stack_a);
	}
}

int	ft_itsnum(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i] || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == 32)
				num++;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ft_printf("Error");
			exit (EXIT_FAILURE);
		}
		i++;
	}
	return (num);
}

int	ft_argsmem(int nargs, char **str)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	j = 0;
	while (i < nargs)
	{
		j = 0;
		while (str[i][j++] != '\0')
			k++;
		i++;
		if (i < nargs)
			k++;
	}
	return (k);
}

char	*ft_joinargs(int nargs, char **args)
{
	t_cont	cont;
	char	*string;

	cont.i = 1;
	cont.j = 0;
	cont.k = 0;
	string = ft_calloc(8000, sizeof(char));
	while (cont.i < nargs)
	{
		cont.j = 0;
		while (args[cont.i][cont.j] != '\0')
		{
			string[cont.k] = args[cont.i][cont.j];
			cont.k++;
			cont.j++;
			if (args[cont.i][cont.j] == '\0')
			{
				cont.k++;
				string[cont.k - 1] = 32;
			}
		}
		cont.i++;
	}
	string[cont.k - 1] = '\0';
	return (string);
}
