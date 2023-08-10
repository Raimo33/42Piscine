/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operazioni.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 00:08:12 by craimond          #+#    #+#             */
/*   Updated: 2023/08/10 00:08:13 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "operazioni.h"

int	sum(int n1, int n2)
{
	return (n1 + n2);
}

int	sub(int n1, int n2)
{
	return (n1 - n2);
}

int	mul(int n1, int n2)
{
	return (n1 * n2);
}

int	div(int n1, int n2)
{
	return (n1 / n2);
}

int	mod(int n1, int n2)
{
	return (n1 % n2);
}
