/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:41:21 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 16:41:22 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *));
/*int is_even(char *str);

int main(void)
{
    char *tab[] = {"1", "3", "5", "8", "9", "11"};
    int result = ft_any(tab, &is_even);

    if (result)
        printf("At least one number is even.\n");
    else
        printf("No even numbers found.\n");

    return 0;
}*/

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab != 0)
	{
		if (f(*tab++) != 0)
			return (1);
	}
	return (0);
}

/*
int is_even(char *str)
{
    int num = atoi(str);  // Convert the string to an integer
    return num % 2 == 0;  // Return 1 if the number is even, 0 otherwise
}*/