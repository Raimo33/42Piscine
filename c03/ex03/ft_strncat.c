/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:41:10 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 15:42:08 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
/*
int main(void)
{
    char dest[50] = "Hello, ";
    char *src = "World";
    unsigned int n = 5;
    printf("Before concatenation: %s\n", dest);
    ft_strncat(dest, src, n);
    printf("After concatenation: %s\n", dest);
    return 0;
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (*dest != '\0')
	{
		n++;
		dest++;
	}
	while ((*(src + i) != '\0') && (i < nb))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest - n);
}
