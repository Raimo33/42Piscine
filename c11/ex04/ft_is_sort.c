/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:55:38 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 16:55:38 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_ascending;
	int	is_descending;

	i = -1;
	is_descending = 1;
	is_ascending = 1;
	while (++i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1]) < 0))
		{
			is_ascending = 0;
			break ;
		}
	}
	i = -1;
	while (++i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1]) > 0))
		{
			is_descending = 0;
			break ;
		}
	}
	return (is_descending + is_ascending);
}
