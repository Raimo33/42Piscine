/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:50:25 by craimond          #+#    #+#             */
/*   Updated: 2023/08/07 18:50:26 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_nbr(char *str, char *charset)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (!ft_in_charset(str[i], charset)
			&& (ft_in_charset(str[i + 1], charset)
				|| !str[i + 1]))
			nbr++;
		i++;
	}
	return (nbr);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_in_charset(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

void	ft_splitnwrite(char **dest, char *str, char *charset, int nbr)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	while (i < nbr)
	{
		while (ft_in_charset(*str, charset))
			str++;
		if (!ft_in_charset(*str, charset))
		{
			len = ft_len(str, charset);
			temp = malloc(sizeof(char) * (len + 1));
			j = 0;
			while (j < len)
				temp[j++] = *str++;
			temp[j] = '\0';
			dest[i] = temp;
		}
		i++;
	}
	dest[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		nbr;

	nbr = ft_check_nbr(str, charset);
	dest = malloc(sizeof(char *) * (nbr + 1));
	if (!dest)
		return (0);
	ft_splitnwrite(dest, str, charset, nbr);
	return (dest);
}
/*
int main()
{
    char *str = "AAABBBCCC";
    char *charset = "AB";
    
    char **result = ft_split(str, charset);
    
    if (result)
    {
        for (int i = 0; result[i]; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error: ft_split returned NULL\n");
    }
    
    return 0;
}*/
