/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:20 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 13:24:25 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr(int num)
{
	char	c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = "0123456789"[num % 10];
	write(1, &c, 1);
}

void	show(int *a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(a[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_isnum(const char *str)
{
	int	idx;
	int	len;

	idx = 0;
	len = (int)ft_strlen(str);
	while (idx < len)
	{
		if (*(str + idx) < '0' || *(str + idx) > '9')
			return (0);
		idx++;
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	num;
	int		i;
	long	sign;

	num = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

int	check_dup(int arr[], int c)
{
	int	idx;
	int	jdx;

	idx = 0;
	while (idx < c)
	{
		jdx = 0;
		while (jdx < c)
		{
			if ((idx != jdx) && (arr[idx] == arr[jdx]))
				return (-1);
			jdx++;
		}
		idx++;
	}
	return (0);
}
