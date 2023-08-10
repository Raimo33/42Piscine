/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:35:32 by craimond          #+#    #+#             */
/*   Updated: 2023/07/30 22:35:33 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		calculate_len(int size, char **strs, char *sep);
void	fill_res(int size, char **strs, char *sep, char *res);
/*
int	main(void)
{
	char *strs[] = {"Hello", "world", "!"};
    char *sep = "PORCATROIA";
    char *result = ft_strjoin(3, strs, sep);

    printf("Result: %s\n", result);

    free(result);
    return 0;
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size <= 0)
	{
		res = (char *) malloc(1);
		res[0] = '\0';
		return (res);
	}
	len = calculate_len(size, strs, sep);
	res = malloc(sizeof(char) * (len + 1));
	fill_res(size, strs, sep, res);
	return (res);
}

void	fill_res(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		while (strs[i][n] != '\0')
		{
			res[n] = strs[i][n];
			n++;
		}
		res += n;
		n = 0;
		i++;
		while (sep[n] != '\0' && i != size)
		{
			res[n] = sep[n];
			n++;
		}
		res += n;
		n = 0;
	}
	res[i] = '\0';
}

int	calculate_len(int size, char **strs, char *sep)
{
	int	i;
	int	n;
	int	len;

	i = 0;
	n = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	len = i * (size - 1);
	i = 0;
	while (i <= size)
	{
		while (strs[i][n] != '\0')
			n++;
		len += n;
		n = 0;
		i++;
	}
	return (len);
}
