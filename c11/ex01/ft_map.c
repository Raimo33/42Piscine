/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:27:43 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 16:27:44 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));
//int	ft_recursive_factorial(int nb);
/*
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 1, 0, 5};
	int *map = ft_map(tab, 10, &ft_recursive_factorial);
	for (int i = 0; i < 10; i++)
		printf("%d\n", map[i]);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*map;

	map = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
/*
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
}*/
