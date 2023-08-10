/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:50:34 by craimond          #+#    #+#             */
/*   Updated: 2023/07/22 08:50:36 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr);

int	main(void){
	int *nbr;
	int random_int = 58;
	int output;
	
	nbr = &random_int;
	ft_ft(nbr);
	output = *nbr;
	write(1, &output, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
