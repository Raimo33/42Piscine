/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:10:53 by craimond          #+#    #+#             */
/*   Updated: 2023/07/20 10:24:07 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	write_char(int c);

/*int	main(void)
{
	ft_print_comb2();
}*/
void	write_char(int c)
{
	char	right_c_min;
	char	left_c_max;
	char	right_c_max;
	char	cifra_zero;

	cifra_zero = '0';
	right_c_min = 48 + c;
	left_c_max = c / 10;
	right_c_max = c % 10;
	if (c < 10)
	{
		write(1, &cifra_zero, 1);
		write(1, &right_c_min, 1);
	}
	if (c > 9)
	{
		left_c_max = left_c_max + 48;
		right_c_max = right_c_max + 48;
		write(1, &left_c_max, 1);
		write(1, &right_c_max, 1);
	}
}

void	ft_print_comb2(void)
{
	char	space;
	char	comma;
	int		digits[2];

	space = ' ';
	comma = ',';
	digits[0] = 0;
	while (digits[0] < 100)
	{
		digits[1] = digits[0] + 1;
		while (digits[1] < 100)
		{
			write_char(digits[0]);
			write(1, &space, 1);
			write_char(digits[1]);
			if (digits[0] != 98 && digits[1] != 100)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
