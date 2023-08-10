/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:30:55 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 15:41:55 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
/*
int main(void)
{
    char str1[20] = "Hello";
    char str2[] = " world!";

    printf("Before ft_strcat:\n");
    printf("str1 = %s, str2 = %s\n", str1, str2);
    ft_strcat(str1, str2);
    printf("After ft_strcat:\n");
    printf("str1 = %s\n", str1);
    return 0;
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (*dest != '\0')
	{
		dest++;
		n++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest - n);
}
