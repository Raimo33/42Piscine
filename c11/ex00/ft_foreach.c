/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:39:02 by craimond          #+#    #+#             */
/*   Updated: 2023/08/08 19:39:03 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_foreach(int *tab, int length, void (*f)(int));
//void	ft_putnbr(int nb);
/*
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 10, 20 ,30};
	ft_foreach(tab, 10, &ft_putnbr);
}*/

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
		f(tab[i++]);
}
/*
void	ft_putnbr(int nb)
{
	char	digit;
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	digit = '0' + (nbl % 10);
	if (nbl >= 10)
		ft_putnbr(nbl / 10);
	write(1, &digit, 1);
}*/
