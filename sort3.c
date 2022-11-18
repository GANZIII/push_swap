/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:59:45 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 18:00:17 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ab_ra(int *a, int *lens, int *pb_ra)
{
	ra(a, lens[0]);
	pb_ra[1]++;
}

void	ba_pa(int *a, int *b, int *lens, int *pa_rb)
{
	pa(a, b, lens);
	pa_rb[0]++;
}

void	ab_pb(int *a, int *b, int *lens, int *pb_ra)
{
	pb(a, b, lens);
	pb_ra[0]++;
}
