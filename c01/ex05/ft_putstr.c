/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:43:57 by craimond          #+#    #+#             */
/*   Updated: 2023/07/22 18:44:00 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*int	main(void)
{
	ft_putstr("quarantadue");
}*/
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}
