/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:36:40 by jijoo             #+#    #+#             */
/*   Updated: 2022/11/12 13:16:04 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# define MAXINT 2147483647
# define MININT -2147483648

int		ascend(int *arr, int iter);
int		onearg(char *str);
int		error(void);
int		count(const char *str, int *ast);
void	ft_init(int *arr, int len);
int		ft_isnum(const char *str);
long	ft_atoi(const char *str);
int		check_dup(int arr[], int c, int *lens);
void	sa(int *ast, int len);
void	sb(int *bst, int len);
void	ss(int *ast, int *bst, int *lens);
void	pa(int *ast, int *bst, int *lens);
void	pb(int *ast, int *bst, int *lens);
void	ra(int *ast, int len);
void	rb(int *bst, int len);
void	rr(int *ast, int *bst, int *lens);
void	rra(int *ast, int len);
void	rrb(int *bst, int len);
void	rrr(int *ast, int *bst, int *lens);
void	show(int *a, int size);
void	ft_putnbr(int num);
int		ft_isdigit(char c);
int		is_min_ele(int *a, int num);
size_t	ft_strlen(const char *str);
int		ft_min(int *arr, int size, int minus);
int		ft_pivot(int *a, int size, int *idx, int *pr);
void	end_ab(int i, int *ast, int len);
void	end_ba(int i, int *a, int *b, int *lens);
void	ba_pa(int *a, int *b, int *lens, int *pa_rb);
void	ab_ra(int *a, int *lens, int *pb_ra);
void	ab_pb(int *a, int *b, int *lens, int *pb_ra);
void	ba_three(int *b);
int		ab_three(int *ast);
void	ft_sort_ab(int *a, int *b, int iter, int *lens);
void	ft_sort_ba(int *a, int *b, int iter, int *lens);
void	pop(int *arr, int size);
void	push(int val, int *arr, int size);
int		get_rl(char *str, char crt);
size_t	get_sl(char **dp, char crt);
void	split_strlcpy(char *dst, char *src, size_t size);
void	dobby(char **s, int i);
char	**ft_split(char const *s, char c);

#endif
