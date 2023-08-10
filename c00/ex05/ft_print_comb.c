/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:01:19 by craimond          #+#    #+#             */
/*   Updated: 2023/07/19 15:50:01 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

/*int	main(void)
{
	ft_print_comb();
}*/
void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = 48;
	while (c1 <= 55)
	{
		c2 = c1 + 1;
		while (c2 <= 56)
		{
			c3 = c2 + 1;
			while (c3 <= 57)
			{
				write(1, &c1, 1);
				write(1, &c2, 1);
				write(1, &c3, 1);
				if (c1 != 55)
					write(1, ", ", 2);
				c3 = c3 + 1;
			}
			c2 = c2 + 1;
		}
		c1 = c1 + 1;
	}
}
