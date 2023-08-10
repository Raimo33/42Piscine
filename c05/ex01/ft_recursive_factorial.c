/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:06:18 by craimond          #+#    #+#             */
/*   Updated: 2023/07/27 23:06:25 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);
/*
int	main(void)
{
	int	n;

	n = 5;
	printf("n: %d \nn!: %d \n", n, ft_recursive_factorial(n));
}*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
			ft_recursive_factorial(nb);
		}
		return (result);
	}
}
