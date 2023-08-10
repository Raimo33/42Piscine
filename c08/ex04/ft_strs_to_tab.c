/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:55:54 by craimond          #+#    #+#             */
/*   Updated: 2023/08/07 15:55:56 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
/*
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;*/

int	struct_array_initialization(t_stock_str *st, char **av, int len, int i)
{
	int	count;

	st[i].size = len;
	st[i].str = (char *)malloc(sizeof(char) * len + 1);
	st[i].copy = (char *)malloc(sizeof(char) * (len + 1));
	if (st[i].str == NULL || st[i].copy == NULL)
		return (1);
	count = 0;
	while (count < len)
	{
		st[i].str[count] = av[i][count];
		st[i].copy[count] = st[i].str[count];
		count++;
	}
	st[i].copy[count] = '\0';
	st[i].str[count] = '\0';
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			len;
	int			i;
	t_stock_str	*st;

	st = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!st)
	{
		free(st);
		return (0);
	}
	i = -1;
	while (++i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		len = 0;
		while (av[i][len])
			len++;
		if (struct_array_initialization(st, av, len, i))
			return (NULL);
	}
	st[i].size = 0;
	st[i].copy = NULL;
	st[i].str = NULL;
	return (st);
}
/*
int main(int argc, char **argv)
{
	struct s_stock_str	*st = ft_strs_to_tab(argc - 1, ++argv);
	for (int i = 0; i < argc; i++)
		printf ("\ndim: %d\nstr: %s\ncopy:%s\n\n", 
		st[i].size, st[i].str, st[i].copy);
}*/
