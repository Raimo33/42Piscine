/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:40:35 by craimond          #+#    #+#             */
/*   Updated: 2023/08/04 21:40:36 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"
/*
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} 						t_stock_str;*/

void	ft_show_tab(struct s_stock_str *par);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
/*					
int	main(void)
{
	t_stock_str *arr = malloc(100 * sizeof(t_stock_str));
	arr[0].str = "Hello";
	arr[0].size = 5;
	arr[0].copy = "Bonjour";
	arr[1].str = "World";
	arr[1].size = 5;
	arr[1].copy = "Monde";
	arr[2].str = "42";
	arr[2].size = 2;
	arr[2].copy = "quarante-deux";
	arr[3].str = "";
	arr[3].size = 0;
	arr[3].copy = "";
	ft_show_tab(arr);
	return (0);
}*/

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == 0)
		return ;
	while (par[i].str != 0)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	if (str == 0)
		return (0);
	while (str[n] != '\0')
		n++;
	return (n);
}

void	ft_putnbr(int nb)
{
	char	digit;
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	digit = '0' + (nbl % 10);
	if (nbl >= 10)
		ft_putnbr(nbl / 10);
	write(1, &digit, 1);
}
