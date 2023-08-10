/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:40:36 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 19:40:55 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));
int		get_len(char **tab);
/*
int main(void)
{
    char *tab[] = {
        "banana",
        "",
        "grape",
        "pear",
        "orange"
    };
    
    int i;
    printf("Original array:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", tab[i]);
    }
    
    ft_advanced_sort_string_tab(tab, strcmp);
    
    printf("\nSorted array:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", tab[i]);
    }
    
    return 0;
}*/

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		n;
	int		d;
	int		lenght;
	char	*tmp;

	n = -1;
	d = -1;
	lenght = get_len(tab);
	while (++d < lenght - 1)
	{
		while (++n < lenght - 1)
		{
			if (cmp(tab[n], tab[n + 1]) > 0)
			{
				tmp = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = tmp;
			}
		}
		n = -1;
	}
}

int	get_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}
