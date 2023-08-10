/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:21:45 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 19:22:17 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	compare(char *argv[], int n);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_string_tab(char **tab);
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
    
    ft_sort_string_tab(tab);
    
    printf("\nSorted array:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", tab[i]);
    }
    
    return 0;
}*/

void	ft_sort_string_tab(char **tab)
{
	int		n;
	int		d;
	int		lenght;

	n = -1;
	d = -1;
	lenght = get_len(tab);
	while (++d < lenght - 1)
	{
		while (++n < lenght - 1)
			compare(tab, n);
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

void	compare(char *tab[], int n)
{
	char	*tmp;
	int		cmp;

	cmp = ft_strcmp(tab[n], tab[n + 1]);
	if (cmp > 0)
	{
		tmp = tab[n];
		tab[n] = tab[n + 1];
		tab[n + 1] = tmp;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
