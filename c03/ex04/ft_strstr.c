/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:04:12 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 15:42:20 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
/*
int	main(void)
{
	char str[50] = "stringalunghissima";
	char to_find[] = "";

	printf("la stringa: %s adesso inizia da: %s", str, ft_strstr(str, to_find));
}*/

char	*ft_strstr(char *str, char *to_find)
{
	int	lenght;
	int	i;

	i = 0;
	lenght = ft_strlen(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		while (*(str + i) == *(to_find + i) && i < lenght)
		{
			i++;
			if (i == lenght)
				return (str);
		}
		i = 0;
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	return (n);
}
