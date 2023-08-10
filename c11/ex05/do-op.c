/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:00:28 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 17:00:29 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "operazioni.h"
#include <unistd.h>

int		ft_atoi(char *str);
int		is_space(char *str);
void	ft_putnbr(int nb);
int		(*check_func(char *symbol))(int, int);

int	main(int argc, char **argv)
{
	int	(*func)(int, int);

	if (argc != 4)
		return (0);
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	func = check_func(argv[2]);
	if (func == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_putnbr(func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	write(1, "\n", 1);
}

int	(*check_func(char *symbol))(int x, int y)
{
	char	*operators;
	int		(*operazioni[5])(int, int);
	int		i;

	operazioni[0] = &sum;
	operazioni[1] = &sub;
	operazioni[2] = &mul;
	operazioni[3] = &div;
	operazioni[4] = &mod;
	operators = "+-*/%";
	i = -1;
	while (++i < 5)
	{
		if (*symbol == operators[i])
			return (operazioni[i]);
	}
	return (0);
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

int	ft_atoi(char *str)
{
	int	num_meno;
	int	num;

	num_meno = 0;
	num = 0;
	while (!is_space(str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			num_meno++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *(str) - 48;
		str++;
	}
	if (num_meno % 2 == 1)
	{
		num = -num;
	}
	return (num);
}

int	is_space(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' )
		return (0);
	if (*str == '\t' || *str == '\v' || *str == '\r')
		return (0);
	return (1);
}
