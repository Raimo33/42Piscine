/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:02:47 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 11:02:48 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
/*
int main(void) {
    char str1[] = "HelloWorld";
    char str2[] = "THIS IS A TEST-STRING.";
    char str3[] = "+This is ANother teSt";
    char str4[] = "   ";
    char str5[] = "12345";
    
    printf("String: %s\n", str1);
    printf("Is alphabetic? %d\n", ft_str_is_alpha(str1));
    printf("\n");
    
    printf("String: %s\n", str2);
    printf("Is alphabetic? %d\n", ft_str_is_alpha(str2));
    printf("\n");
    
    printf("String: %s\n", str3);
    printf("Is alphabetic? %d\n", ft_str_is_alpha(str3));
    printf("\n");
    
    printf("String: %s\n", str4);
    printf("Is alphabetic? %d\n", ft_str_is_alpha(str4));
    printf("\n");
    
    printf("String: %s\n", str5);
    printf("Is alphabetic? %d\n", ft_str_is_alpha(str5));
    printf("\n");
    
    return 0;
}*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str <= 'Z' && *str >= 'A') || (*str <= 'z' && *str >= 'a')))
			return (0);
		str++;
	}
	return (1);
}
