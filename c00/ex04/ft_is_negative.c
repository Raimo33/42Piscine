/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:52:13 by craimond          #+#    #+#             */
/*   Updated: 2023/07/19 11:04:27 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

/*int main(void)
{
	ft_is_negative(-67);	
}*/
void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 78;
	}
	else
	{
		result = 80;
	}
	write (1, &result, 1);
}
