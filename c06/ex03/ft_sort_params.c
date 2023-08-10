/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:55:08 by craimond          #+#    #+#             */
/*   Updated: 2023/07/27 14:55:08 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_params(int argc, char *argv[]);
void	compare(char *argv[], int n);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		n;
	int		d;

	n = 1;
	d = 0;
	while (d < argc)
	{
		while (n < argc - 1)
		{
			compare(argv, n);
			n++;
		}
		n = 1;
		d++;
	}
	write_params(argc, argv);
}

void	write_params(int argc, char *argv[])
{
	while (argc > 1)
	{
		argv++;
		while (**argv != '\0')
		{
			write(1, &**argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argc--;
	}
}

void	compare(char *argv[], int n)
{
	char	*tmp;
	int		cmp;

	cmp = ft_strcmp(argv[n], argv[n + 1]);
	if (cmp > 0)
	{
		tmp = argv[n];
		argv[n] = argv[n + 1];
		argv[n + 1] = tmp;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
