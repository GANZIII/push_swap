/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:39:26 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/12 16:22:56 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pivot(int *a, int size, int *idx, int *pr)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	*idx = 0;
	pr[0] = 0;
	pr[1] = 0;
	while (i < size)
	{
		cnt = 0;
		j = 0;
		while ((j < size))
		{
			if (a[j] < a[i])
				cnt++;
			j++;
		}
		if (cnt == (size - 1) / 2)
			return (a[i]);
		i++;
	}
	return (-1);
}

void	end_ba(int i, int *a, int *b, int *lens)
{
	if (i == 1)
		pa(a, b, lens);
	if (i == 2)
	{
		if (b[0] < b[1])
			sb(b, 2);
	}
	if (i == 3)
	{
		ba_three(b);
		pa(a, b, lens);
		pa(a, b, lens);
		pa(a, b, lens);
	}
}

void	ft_sort_ba(int *a, int *b, int iter, int *lens)
{
	int	pivot;
	int	i;
	int	pa_rb[2];

	if (iter <= 1)
		return (end_ba(iter, a, b, lens));
	pivot = ft_pivot(b, iter, &i, pa_rb);
	while (i++ < iter)
	{
		if (b[0] <= pivot)
		{
			rb(b, lens[1]);
			pa_rb[1]++;
		}
		else
			ba_pa(a, b, lens, pa_rb);
	}
	i = 0;
	while (i++ < pa_rb[1] && pa_rb[1] != lens[1])
		rrb(b, lens[1]);
	ft_sort_ab(a, b, pa_rb[0], lens);
	ft_sort_ba(a, b, pa_rb[1], lens);
}

void	end_ab(int i, int *ast, int len)
{
	if (i == 2)
	{
		if (ast[0] > ast[1])
			sa(ast, len);
	}
	if (i == 3)
		ab_three(ast);
}

void	ft_sort_ab(int *a, int *b, int iter, int *lens)
{
	int	pivot;
	int	i;
	int	pb_ra[2];

	if (ascend(a, iter))
		return ;
	pivot = ft_pivot(a, iter, &i, pb_ra);
	if (iter <= 2)
		return (end_ab(iter, a, lens[0]));
	else
	{
		while ((i++ < iter))
		{
			if (a[0] <= pivot)
				ab_pb(a, b, lens, pb_ra);
			else
				ab_ra(a, lens, pb_ra);
		}
	}
	i = 0;
	while (i++ < pb_ra[1] && pb_ra[1] != lens[0])
		rra(a, lens[0]);
	ft_sort_ab(a, b, pb_ra[1], lens);
	ft_sort_ba(a, b, pb_ra[0], lens);
}
