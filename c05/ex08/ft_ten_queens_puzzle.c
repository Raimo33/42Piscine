/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:09:35 by craimond          #+#    #+#             */
/*   Updated: 2023/08/01 14:09:35 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int populate(int grid[10][10], int x, int i);
void show_grid(int grid[10][10]);
int	ft_ten_queens_puzzle(void);
int checkD(int grid[10][10], int x, int i);
int check(int grid[10][10], int x, int i);
void initialize(int grid[10][10]);

int main(void)
{
	printf("numero di possibilita': %d", ft_ten_queens_puzzle());
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int i;
	int m;
	int grid[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
	int posQueens[10];

	i = 0;
	m = 0;

	while (i < 10)
	{
		initialize(grid);
		m += populate(grid, 0, i);
		i++;
	}
	show_grid(grid);
	return (m);
}

int check(int grid[10][10], int x, int i){
	int a;

	a = 0;

	while (a < 10)
	{
		if (a == x)
		{
			a++;
			continue ;
		}
		if(grid[a][i] != 0)
		{
			return (1);
		}
		a++;
	}
	return (0);
}

int checkD(int grid[10][10], int x, int i)
{
	int a;

	a = 1;
	while ((x - a >= 0 && i - a >= 0) || (x + a<= 9 && i + a<= 9))
	{
		if (grid[x - a][i - a] != 0 && (x - a >= 0 && i - a >= 0))
			return (1);
		if (grid[x + a][i + a] != 0 && (x + a<= 9 && i + a<= 9))
			return (1);
		a++;
	}
	a = 1;
	while ((x - a >= 0 && i + a <= 9) || (x - a >= 0 && i + a<= 9))
	{
		if (grid[x + a][i - a] != 0 && (x + a <= 9 && i - a >= 0))
			return (1);
		if (grid[x - a][i + a] != 0 && (x - a >= 0 && i + a <= 9))
			return (1);
		a++;
	}
	return (0);
}

int populate(int grid[10][10], int x, int i)
{
	int c;
	int f;
	int num_tre;

	num_tre = 0;
	f = 0;
	c = 0;
	if (i < 10 && x < 10)
	{
		grid[x][i] = 3;
		if (check(grid, x, i) == 1 || checkD(grid, x, i) == 1)
		{
			grid[x][i] = 0;
			populate(grid, x, i + 1);
		}
		populate(grid, x + 1, 0);
	}
	if (x == 10)
	{
		while (c < 10)
		{
			while (f < 10)
			{
				if (grid[c][f] == 3)
					num_tre++;
				f++;
			}
			f = 0;
			c++;
		}
		if (num_tre == 10)
			return (1);
	}
	return (0);
}

void show_grid(int grid[10][10])  //da elimiinare
{
	int i;
	int n;
	int to_print;

	i = 0;
	n = 0;
	while (n < 10)
	{
		while (i < 10)
		{
			to_print = grid[i][n] + 48;
			write(1, &to_print, 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		n++;
	}
}

void initialize(int grid[10][10])
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (n < 10)
	{
		while (i < 10)
		{
			grid[n][i] = 0;
			i++;
		}
		i = 0;
		n++;
	}
}
