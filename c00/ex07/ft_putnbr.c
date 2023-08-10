/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:33:56 by craimond          #+#    #+#             */
/*   Updated: 2023/07/20 14:34:06 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
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
}
