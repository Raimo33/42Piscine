/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:12:30 by craimond          #+#    #+#             */
/*   Updated: 2023/08/01 00:12:32 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
long	ft_strlen(char *str);
int		check_base(char *base, long len);
/*
int	main(void)
{
	ft_putnbr_base(-42, "ABCDEFAGBIUWBIFWA");
}*/

void	ft_putnbr_base(int nbr, char *base)
{
	long	len;
	long	nbrl;

	nbrl = nbr;
	len = ft_strlen(base);
	if (check_base(base, len) == 0 || len <= 1)
		return ;
	if (nbrl < 0)
	{
		write(1, "-", 1);
		nbrl = -nbrl;
	}
	if (nbrl >= len)
		ft_putnbr_base(nbrl / len, base);
	write(1, &base[nbrl % len], 1);
}

int	check_base(char *base, long len)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (n < len && base[i + n] != '\0')
		{
			if (base[i] == base[i + n])
				return (0);
			n++;
		}
		n = 1;
		i++;
	}
	return (1);
}

long	ft_strlen(char *str)
{
	long	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}
