/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:16:15 by craimond          #+#    #+#             */
/*   Updated: 2023/07/28 11:16:15 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);
/*
int	main(void)
{
	printf("n: %d, power: %d \nResult: %d", -5, 3, ft_iterative_power(-5, 3));	
}*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
