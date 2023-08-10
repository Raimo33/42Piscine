/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:03:40 by craimond          #+#    #+#             */
/*   Updated: 2023/07/19 10:38:56 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c >= 97)
	{
		write(1, &c, 1);
		c = c -1;
	}
}
