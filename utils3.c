/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:11:13 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 22:44:37 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	onearg(char *str)
{
	if (ft_atoi(str) > MAXINT || ft_atoi(str) < MININT)
		return (error());
	else
		return (0);
}
