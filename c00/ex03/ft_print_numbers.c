/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:03:40 by craimond          #+#    #+#             */
/*   Updated: 2023/07/19 10:50:05 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

/*int	main(void)
{
	ft_print_numbers();
}*/
void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n = n + 1;
	}
}
