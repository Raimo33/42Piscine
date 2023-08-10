/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:45:09 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 12:45:10 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);
/*
int main(void) {
    char str1[] = "helloworld";
    char str2[] = "this is a test string";
    char str3[] = "+ThisisANotherteSt";
    char str4[] = "   ";
    char str5[] = "12345";
    
    printf("String: %s\n", str1);
    printf("Is lowercase? %d\n", ft_str_is_lowercase(str1));
    printf("\n");
    
    printf("String: %s\n", str2);
    printf("Is lowercase? %d\n", ft_str_is_lowercase(str2));
    printf("\n");
    
    printf("String: %s\n", str3);
    printf("Is lowercase? %d\n", ft_str_is_lowercase(str3));
    printf("\n");
    
    printf("String: %s\n", str4);
    printf("Is lowercase? %d\n", ft_str_is_lowercase(str4));
    printf("\n");
    
    printf("String: %s\n", str5);
    printf("Is lowercase? %d\n", ft_str_is_lowercase(str5));
    printf("\n");
    
    return 0;
}*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str <= 'z' && *str >= 'a'))
			return (0);
		str++;
	}
	return (1);
}
