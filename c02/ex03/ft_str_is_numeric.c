/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:06:40 by craimond          #+#    #+#             */
/*   Updated: 2023/07/25 16:35:33 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);
/*
int main(void) {
    char str1[] = "12345";
    char str2[] = "THIS IS A TEST-STRING.";
    char str3[] = "+123";
    char str4[] = "   ";
    char str5[] = "12.345";
    
    printf("String: %s\n", str1);
    printf("Is numeric? %d\n", ft_str_is_numeric(str1));
    printf("\n");
    
    printf("String: %s\n", str2);
    printf("Is numeric? %d\n", ft_str_is_numeric(str2));
    printf("\n");
    
    printf("String: %s\n", str3);
    printf("Is numeric? %d\n", ft_str_is_numeric(str3));
    printf("\n");
    
    printf("String: %s\n", str4);
    printf("Is numeric? %d\n", ft_str_is_numeric(str4));
    printf("\n");
    
    printf("String: %s\n", str5);
    printf("Is numeric? %d\n", ft_str_is_numeric(str5));
    printf("\n");
    
    return 0;
}*/

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str <= '9' && *str >= '0'))
			return (0);
		str++;
	}
	return (1);
}
