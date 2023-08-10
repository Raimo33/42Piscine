/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:41:31 by craimond          #+#    #+#             */
/*   Updated: 2023/07/28 23:41:32 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);
int	ft_sqrt(int nb);
/*
int	main(void)
{
	int n = 5;
	printf("numero: %d\nnumero primo piu vicino: %d", n, ft_find_next_prime(n));
}*/

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	n;
	int	square;

	n = 0;
	square = 0;
	while (square < nb && n <= 46341)
	{
		n++;
		square = n * n;
	}
	if (square == nb)
		return (n);
	else
		return (n - 1);
}
