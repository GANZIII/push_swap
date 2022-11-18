/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:35:35 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/06 19:16:23 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(int *ast, int *bst, int *lens)
{
	ra(ast, lens[0]);
	rb(bst, lens[1]);
}

void	rra(int *ast, int len)
{
	int	i;
	int	tmp;

	i = len - 1;
	if (len)
	{
		write(1, "rra\n", 4);
		tmp = ast[len - 1];
		while (i > 0)
		{
			ast[i] = ast[i - 1];
			i--;
		}
		ast[0] = tmp;
	}
}

void	rrb(int *bst, int len)
{
	int	i;
	int	tmp;

	i = len - 1;
	if (len)
	{
		write(1, "rrb\n", 4);
		tmp = bst[len - 1];
		while (i > 0)
		{
			bst[i] = bst[i - 1];
			i--;
		}
		bst[0] = tmp;
	}
}

void	rrr(int *ast, int *bst, int *lens)
{
	rra(ast, lens[0]);
	rrb(bst, lens[1]);
}
