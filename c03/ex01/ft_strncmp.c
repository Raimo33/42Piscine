/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:25:08 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 15:41:40 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
/*
int	main(void)
{
	char	*string1 = "";
	char	*string2 = "Quarantadueeee";
	int output;

	output = ft_strncmp(string1, string2, 0);

	printf("Prima stringa: %s \n", string1);
	printf("Seconda stringa: %s \n", string2);
	printf("diff tra i primi caratteri diversi: %d \n", output);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && n - 1 > 0 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
