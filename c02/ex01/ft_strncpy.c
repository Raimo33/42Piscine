/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:25:46 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 10:25:48 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
int main(void) {
    char src[] = "Hello, world!";
    char dest1[20];
    char dest2[20];
    char dest3[20];
    
    ft_strncpy(dest1, src, 5);
    printf("dest1: %s\n", dest1);
    
    ft_strncpy(dest2, src, 20);
    printf("dest2: %s\n", dest2);
    
    ft_strncpy(dest3, src, 10);
    printf("dest3: %s\n", dest3);
    
    return 0;
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (*(src + i) == '\0')
	{
		while (i < n)
		{
			*(dest + i) = '\0';
			i++;
		}
	}
	return (dest);
}
