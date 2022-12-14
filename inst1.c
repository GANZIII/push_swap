/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:27:04 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/06 20:39:07 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *ast, int len)
{
	int	temp;

	if (len >= 2)
	{
		write(1, "sa\n", 3);
		temp = ast[0];
		ast[0] = ast[1];
		ast[1] = temp;
	}
}

void	sb(int *bst, int len)
{
	int	temp;

	if (len >= 2)
	{
		write(1, "sb\n", 3);
		temp = bst[0];
		bst[0] = bst[1];
		bst[1] = temp;
	}
}

void	ss(int *ast, int *bst, int *lens)
{
	sa(ast, lens[0]);
	sa(bst, lens[1]);
}
