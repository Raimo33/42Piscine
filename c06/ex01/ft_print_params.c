/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:04:04 by craimond          #+#    #+#             */
/*   Updated: 2023/07/27 11:04:05 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (argc > 1)
	{
		while (**argv != '\0')
		{
			write(1, &**argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argc--;
		argv++;
	}
}
