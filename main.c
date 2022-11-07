/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:35:30 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/07 14:22:32 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_param(int c, char *arr[])
{
	int	idx;

	if (c == 2)
	{
		idx = 0;
		while (arr[1][idx])
		{
			if ((ft_isdigit(arr[1][idx]) == 0) && (arr[1][idx] != ' '))
				return (-1);
			idx++;
		}
		return (0);
	}
	idx = 1;
	while (idx < c)
	{
		if (ft_strlen(arr[idx]) == 0)
			return (-1);
		if (ft_isnum(arr[idx]) == 0)
			return (-1);
		if ((ft_atoi(arr[idx]) > MAXINT) || ft_atoi(arr[idx]) < MININT)
			return (-1);
		idx++;
	}
	return (0);
}

int	error()
{
	write(2, "Error\n", 6);
	return (1);
}

int	count(const char *str, int *ast)
{
	int	cnt;
	int	i;
	int	val;
	int	j;

	cnt = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			cnt++;
			val = 0;
			while (ft_isdigit(str[i]))
			{
				val = val * 10 + str[i] - 48;
				i++;
			}
			ast[j++] = val;
		}
		else
			i++;
	}
	return (cnt);
}

void	ft_init(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = -1;
		i++;
	}
	show(arr, len);
}

int	main(int argc, char *argv[])
{
	int	idx;
	int	a[500];
	int	b[500];
	int	lens[2];

	if (argc == 1)
		return (0);
	if ((argc == 2) && ft_isnum(argv[1]))
		return (0);
	if (check_param(argc, argv) == -1)
		return (error());
	idx = 0;
	if (argc != 2)
	{
		while (idx++ < argc - 1)
			a[idx - 1] = (int)ft_atoi(argv[idx]);
	}
	else
		argc = count(argv[1], a) + 1;
	if (check_dup(a, argc - 1) == -1)
		return (error(a, b));
	lens[0] = argc - 1;
	lens[1] = 0;
	ft_sort_ab(a, b, argc - 1, lens);
	show(a, argc -1 );
	return (0);
}
