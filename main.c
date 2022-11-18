/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:35:30 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/09 13:37:48 by jijoo            ###   ########.fr       */
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

int	error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	count(const char *str, int *ast)
{
	int		cnt;
	char	**set;

	set = ft_split(str, ' ');
	cnt = 0;
	while (set[cnt])
	{
		ast[cnt] = ft_atoi(set[cnt]);
		cnt++;
	}
	dobby(set, cnt);
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
	int	a[5000];
	int	b[5000];
	int	lens[2];

	if (argc == 1)
		return (0);
	if ((argc == 2) && ft_isnum(argv[1]))
		return (onearg(argv[1]));
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
	if (check_dup(a, argc - 1, lens) == -1)
		return (error());
	if (argc == 4)
		return (ab_three(a));
	ft_sort_ab(a, b, argc - 1, lens);
	return (0);
}
