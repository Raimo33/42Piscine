/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:12:15 by craimond          #+#    #+#             */
/*   Updated: 2023/07/30 19:12:16 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max);
/*
int main(void)
{
    int *arr;
    int i;

    arr = ft_range(1, 5);
    if (arr == NULL)
    {
        printf("Error: ft_range returned NULL\n");
        return (1);
    }
    i = 0;
    while (i < (3))
    {
        printf("%d, ", arr[i]);
        i++;
    }
    printf("%d\n", arr[i]);
    free(arr);
    return (0);
}*/

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	n;
	int	size;

	array = 0;
	if (min >= max)
		return (array);
	i = 0;
	size = (max - min) * 4;
	array = (int *) malloc(size);
	n = max - min;
	if (n < 0)
		n = -n;
	while (i < n)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
