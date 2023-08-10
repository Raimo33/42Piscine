/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:47:43 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 12:47:45 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);
/*
int main(void) {
    char str1[] = "HELLOWORLD";
    char str2[] = "THIS IS ATEST STRING.";
    char str3[] = "+ThisisANotherteSt";
    char str4[] = "   ";
    char str5[] = "12345";
    
    printf("String: %s\n", str1);
    printf("Is uppercase? %d\n", ft_str_is_uppercase(str1));
    printf("\n");
    
    printf("String: %s\n", str2);
    printf("Is uppercase? %d\n", ft_str_is_uppercase(str2));
    printf("\n");
    
    printf("String: %s\n", str3);
    printf("Is uppercase? %d\n", ft_str_is_uppercase(str3));
    printf("\n");
    
    printf("String: %s\n", str4);
    printf("Is uppercase? %d\n", ft_str_is_uppercase(str4));
    printf("\n");
    
    printf("String: %s\n", str5);
    printf("Is uppercase? %d\n", ft_str_is_uppercase(str5));
    printf("\n");
    
    return 0;
}*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str <= 'Z' && *str >= 'A'))
			return (0);
		str++;
	}
	return (1);
}
