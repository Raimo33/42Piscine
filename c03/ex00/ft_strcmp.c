/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:22:05 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 15:41:28 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);
/*
int	main(void)
{
	char	*string1 = "Quarantadue";
	char	*string2 = "Quarantasette";
	int output;

	output = ft_strcmp(string1, string2);

	printf("Prima stringa: %s \n", string1);
	printf("Seconda stringa: %s \n", string2);
	printf("diff tra i primi caratteri diversi: %d \n", output);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
