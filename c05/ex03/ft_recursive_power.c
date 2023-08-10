/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:35:00 by craimond          #+#    #+#             */
/*   Updated: 2023/07/28 11:35:00 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power);
/*
int	main(void)
{
	printf("n: %d, power: %d \nResult: %d", 2, 3, ft_recursive_power(2, 3));	
}*/

int	ft_recursive_power(int nb, int power)
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
		ft_recursive_power(nb, power);
	}
	return (result);
}
