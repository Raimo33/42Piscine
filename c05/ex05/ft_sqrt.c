/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:54:02 by craimond          #+#    #+#             */
/*   Updated: 2023/07/28 22:54:03 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
/*
int	main(void)
{
	int n = 2147483647;
	printf("numero: %d\nradice quadrata: %d", n, ft_sqrt(n));
}*/

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
		return (0);
}
