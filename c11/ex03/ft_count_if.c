/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:46:55 by craimond          #+#    #+#             */
/*   Updated: 2023/08/09 16:46:56 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int lenght, int (*f)(char *));

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (++i < lenght)
	{
		if (f(tab[i]) != 0)
			n++;
	}
	return (n);
}
