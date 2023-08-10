/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:23:18 by craimond          #+#    #+#             */
/*   Updated: 2023/07/26 15:23:20 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);
/*
int	main(void)
{
	int n;

	n = 0;
	printf("n: %d \nn!: %d \n", n, ft_iterative_factorial(n));
}*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i < nb)
		{
			result *= nb - i;
			i++;
		}
		return (result);
	}
}
