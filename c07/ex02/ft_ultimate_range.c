/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:53:00 by craimond          #+#    #+#             */
/*   Updated: 2023/07/30 19:53:01 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
/*
int main(void)
{
    int *arr;
    int size;
    int i;

    size = ft_ultimate_range(&arr, 1, 5);
    if (size == 0)
    {
        printf("Error: ft_ultimate_range returned 0\n");
        return (1);
    }
    i = 0;
    while (i < size - 1)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    printf("%d\n", arr[i]);
    free(arr);
    return (0);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	array = (int *) malloc(size * 4);
	if (array == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}
