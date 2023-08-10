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

	i = -1;
	if (lenght == 1)
		return (1);
	while (++i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1]) < 0)) 
			break ;
	}
	if (i == lenght - 1)
		return (1);
	i = -1;
	while (++i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1]) > 0))
			break ;
	}
	if (i == lenght - 1)
		return (1);
	return (0);
}
/*
int compare_integers(int a, int b) {
    if (a < b) {
        return -1;
    } else if (a == b) {
        return 0;
    } else {
        return 1;
    }
}

int	main(void){
	int *array = malloc(sizeof(int) * 11);
	array[0] = 1;
	array[1] = 2; 
	array[2] = 2; 
	array[3] = 2; 
	array[4] = 2; 
	array[5] = 3;
	array[6] = 4; 
	array[7] = 5;
	array[8] = 6; 
	array[9] = 6; 
	array[10] = 6; 
	array[11] = 7;
	printf("risultato: %d\n", ft_is_sort(array, 11, &compare_integers));
}*/
