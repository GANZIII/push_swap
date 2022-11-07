/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:03:42 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 14:10:08 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int is_min_ele(int *a, int num)
{
    int i;

    i = 0;
    while (i < 3)
    {
        if (a[i] < num)
            return (0);
        i++;
    }
    return (1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	pop(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
}

void	push(int val, int *arr, int size)
{
	int	i;

	i = size;
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[0] = val;
}
