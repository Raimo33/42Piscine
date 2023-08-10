/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:37:09 by craimond          #+#    #+#             */
/*   Updated: 2023/07/26 12:37:10 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	is_space(char *str);
/*
int	main(void)
{
	char *s = "    \f \v   +--+-17462dwa$123";
	printf("%d", ft_atoi(s));
}*/

int	ft_atoi(char *str)
{
	int	num_meno;
	int	num;

	num_meno = 0;
	num = 0;
	while (!is_space(str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			num_meno++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *(str) - 48;
		str++;
	}
	if (num_meno % 2 == 1)
	{
		num = -num;
	}
	return (num);
}

int	is_space(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' )
		return (0);
	if (*str == '\t' || *str == '\v' || *str == '\r')
		return (0);
	return (1);
}
