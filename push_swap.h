/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:34:01 by delvira-          #+#    #+#             */
/*   Updated: 2023/03/03 20:17:17 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int	valor;
	int	index;
}	t_stack;

typedef struct s_moves
{
	int		moves1;
	int		moves2;
	int		moves3;
	int		moves4;
	int		movbajo;
	int		i;
	int		ind;
	int		contindx;
	int		lowermoves;
}	t_moves;

typedef struct s_cont
{
	int		i;
	int		j;
	int		x;
	int		k;
	int		ind;
}	t_cont;

typedef struct s_val
{
	int		i;
	int		x;
	char	*lista;
	char	**split;
	int		numargs;
}	t_val;

void	sasim(t_stack *stack_a);
void	sbsim(t_stack *stack_b);
void	sssim(t_stack *stack_a, t_stack *stack_b);
void	pasim(t_stack *stack_a, t_stack *stack_b);
void	pbsim(t_stack *stack_a, t_stack *stack_b);
void	rasim(t_stack	*stack_a);
void	rbsim(t_stack	*stack_b);
void	rrsim(t_stack *stack_a, t_stack *stack_b);
void	rrasim(t_stack *stack_a);
void	rrbsim(t_stack *stack_b);
void	rrrsim(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	paif(t_stack *stack_a, t_stack *stack_b, int i, int j);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pbif(t_stack *stack_a, t_stack *stack_b, int i, int j);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack	*stack_a);
void	rb(t_stack	*stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	assign_index(t_stack *stack_a, int nargs);
void	orderthreenum(t_stack *stack_a);
t_stack	*stack_copy(t_stack *stack);
int		max_indx(t_stack *stack);
int		min_indx(t_stack *stack);
int		last_indx(t_stack *stack);
void	allexcepthree(t_stack *stack_a, t_stack *stack_b);
void	uuwhile1(t_stack *stack_a, t_stack *stack_b, int ind);
void	uuwhile2(t_stack *stack_a, t_stack *stack_b, int ind);
void	uu(t_stack *stack_a, t_stack *stack_b, int ind);
void	duif(t_stack *stack_a, int ind);
void	du(t_stack *stack_a, t_stack *stack_b, int ind);
void	ddif(t_stack *stack_a, int ind);
void	dd(t_stack *stack_a, t_stack *stack_b, int ind);
void	udrr(t_stack *stack_a, t_stack *stack_b, int ind);
void	udlastindx1(t_stack *stack_a, int ind);
void	udlastindx2(t_stack *stack_a, int ind);
void	ud(t_stack *stack_a, t_stack *stack_b, int ind);
int		uusimcpyw1(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves);
int		uusimcpyw2(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves);
int		uusimcpyif(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves);
int		uusimcpy(t_stack *stack_a, t_stack *stack_b, int ind);
int		dusimcpyminmax(t_stack *stackk_a, int ind, int moves);
int		dusimcpyif(t_stack *stackk_a, int ind, int moves);
int		dusimcpy(t_stack *stack_a, t_stack *stack_b, int ind);
int		ddsimcpyrr(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves);
int		ddsimcpyminmax(t_stack *stackk_a, int ind, int moves);
int		ddsimcpylast(t_stack *stackk_a, int ind, int moves);
int		ddsimcpy(t_stack *stack_a, t_stack *stack_b, int ind);
int		udsimcpyrr(t_stack *stackk_a, t_stack *stackk_b, int ind, int moves);
int		udsimcpyminmax(t_stack *stackk_a, int ind, int moves);
int		udsimcpylast1(t_stack *stackk_a, int ind, int moves);
int		udsimcpylast2(t_stack *stackk_a, int ind, int moves);
int		udsimcpy(t_stack *stack_a, t_stack *stack_b, int ind);
t_moves	lowestmvs(t_stack *stack_a, t_stack *stack_b, int ind, t_moves mvs);
t_moves	valores(void);
int		lowest(t_stack *stack_a, t_stack *stack_b, t_moves mvs);
void	sendthelowest(t_stack *stack_a, t_stack *stack_b, int ind);
void	lasthing(t_stack *stack_a);
int		ft_itsnum(char *str);
int		ft_argsmem(int nargs, char **str);
char	*ft_joinargs(int nargs, char **args);
double	ft_atoi2(const char *str);
void	samevaluerror(t_stack *stack_a, int nargs);
void	iforderror(t_stack *stack_a, int nargs);
int		reservanum(char *str);
void	quotationerror1(t_stack *stack_a, int i);
void	ft_free(char **strs, int x);
t_stack	*quotationerror(char **args, t_stack *stack_a);
t_stack	*quotationerror_stack_b(char **args, t_stack *stack_b);
void	ifarg1(char **args);
t_stack	*ifargsnt2stack_a(t_stack *stack_a, char **args, int nargs, int i);
t_stack	*ifargsnt2stack_b(t_stack *stack_b, int nargs);
void	controlderrores(t_stack *stcka, t_stack *stckb, char **args, int nargs);
void	ifnoarg1(char **args);
void	ifonlypushswap(int nargs);
void	push_swap(t_stack *stack_a, t_stack *stack_b, t_moves mvs);

#endif