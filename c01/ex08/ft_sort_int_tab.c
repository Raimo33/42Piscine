/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:36:04 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 09:36:06 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
int		compare_two_b(int *tab, int n, int size);
int		compare_two_s(int *tab, int n, int size);

/*int	main(void)
{
	int	tab[] = {3, 1, 4, 2, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i;

	printf("Before sorting:\n");
	for (i = 0; i < size; i++) {
    	printf("%d ", tab[i]);
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("After sorting:\n");
	for (i = 0; i < size; i++) {
	printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	i;
	int	biggest;
	int	smallest;

	n = 0;
	i = 0;
	while (i < size)
	{
		while (n < size)
		{
			biggest = compare_two_b(tab, n, size);
			smallest = compare_two_s(tab, n, size);
			*(tab + n) = smallest;
			*(tab + n +1) = biggest;
			n++;
		}
		n = 0;
		i++;
	}
}

int	compare_two_b(int *tab, int n, int size)
{
	if (n < (size -1))
	{
		if ((*(tab + n)) > (*(tab + n + 1)))
			return (*(tab + n));
		else
			return (*(tab + n + 1));
	}
	else
		return (*(tab + n));
}

int	compare_two_s(int *tab, int n, int size)
{
	if (n < (size -1))
	{
		if ((*(tab + n)) < (*(tab + n + 1)))
			return (*(tab + n));
		else
			return (*(tab + n + 1));
	}
	else
		return (*(tab + n));
}
