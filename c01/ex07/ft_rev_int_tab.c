/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:15:16 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 09:15:21 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	tmp;

	tmp = 0;
	n = 0;
	while (n < (size / 2))
	{
		tmp = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = tmp;
		n++;
	}
}
/*
int	main(void)
{
	int array[] = {51, 52, 53, 54, 55, 56};
	ft_rev_int_tab(array, 6);
	
	for (int i =0; i <6; i++)
	{
		printf("%i ", array[i]);
	}
}*/
