/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:12:49 by craimond          #+#    #+#             */
/*   Updated: 2023/07/24 11:12:51 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	write_hex(char *str);
/*
int	main(void)
{
	char	str[] = "Hello, ©World!";

	ft_putstr_non_printable(str);
	return (0);
}*/

void	ft_putstr_non_printable(char *str)
{
	if (str == 0)
		return ;
	while (*str != '\0')
	{
		if (!(*str > 31 && *str < 127))
		{
			write_hex(str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

void	write_hex(char *str)
{
	int				hex_left;
	int				hex_right;
	unsigned char	c;

	if (*str < 0)
		c = *str + 256;
	else
		c = *str;
	hex_left = c / 16;
	hex_right = c % 16;
	if (hex_left < 10)
		hex_left += 48;
	else if (hex_left > 9)
		hex_left += 87;
	if (hex_right < 10)
		hex_right += 48;
	else if (hex_right > 9)
		hex_right += 87;
	write(1, "\\", 1);
	write(1, &hex_left, 1);
	write(1, &hex_right, 1);
}
