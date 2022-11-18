/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:56:53 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 22:44:30 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	descend(int *arr, int iter)
{
	int	i;

	i = 0;
	while (i < iter - 1)
	{
		if (arr[i] < arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ascend(int *arr, int iter)
{
	int	i;

	i = 0;
	while (i < iter - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ba_three(int *b)
{
	if (is_min_ele(b, b[0]))
	{
		if (b[1] < b[2])
		{
			sb(b, 3);
			rrb(b, 3);
		}
		else
			rb(b, 3);
	}
	else if (is_min_ele(b, b[1]))
	{
		if (b[0] < b[2])
			rrb(b, 3);
		else
		{
			sb(b, 3);
			rb(b, 3);
		}
	}
	else
	{
		if (b[0] < b[1])
			sb(b, 3);
	}
}

int	ab_three(int *ast)
{
	if (is_min_ele(ast, ast[0]))
	{
		if (ast[1] > ast[2])
		{
			sa(ast, 3);
			ra(ast, 3);
		}
	}
	else if (is_min_ele(ast, ast[1]))
	{
		if (ast[0] < ast[2])
			sa(ast, 3);
		else
			ra(ast, 3);
	}
	else
	{
		if (ast[0] > ast[1])
			sa(ast, 3);
		rra(ast, 3);
	}
	return (0);
}
