/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:31:48 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 18:01:36 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *ast, int *bst, int *lens)
{
	int	val;

	val = bst[0];
	if (lens[1])
	{
		write(1, "pa\n", 3);
		pop(bst, lens[1]);
		lens[1] -= 1;
		push(val, ast, lens[0]);
		lens[0] += 1;
	}
}

void	pb(int *ast, int *bst, int *lens)
{
	int	val;

	val = ast[0];
	if (lens[0])
	{
		write(1, "pb\n", 3);
		pop(ast, lens[0]);
		lens[0] -= 1;
		push(val, bst, lens[1]);
		lens[1] += 1;
	}
}

void	ra(int *ast, int len)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ast[0];
	if (len)
	{
		write(1, "ra\n", 3);
		while (i < len - 1)
		{
			ast[i] = ast[i + 1];
			i++;
		}
		ast[i] = tmp;
	}
}

void	rb(int *bst, int len)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = bst[0];
	if (len)
	{
		write(1, "rb\n", 3);
		while (i < len - 1)
		{
			bst[i] = bst[i + 1];
			i++;
		}
		bst[i] = tmp;
	}
}
