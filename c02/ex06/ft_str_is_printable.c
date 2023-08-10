/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:51:13 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 12:51:14 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);
/*
int main(void) {
    char str1[] = "This is a printable string!";
    char str2[] = "This is NOT a printable string\n";
    char str3[] = "\t";
    char str4[] = "12345";
    
    printf("String: %s\n", str1);
    printf("Is printable? %d\n", ft_str_is_printable(str1));
    printf("\n");
    
    printf("String: %s\n", str2);
    printf("Is printable? %d\n", ft_str_is_printable(str2));
    printf("\n");
    
    printf("String: %s\n", str3);
    printf("Is printable? %d\n", ft_str_is_printable(str3));
    printf("\n");
    
    printf("String: %s\n", str4);
    printf("Is printable? %d\n", ft_str_is_printable(str4));
    printf("\n");
    
    return 0;
}*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 31 && *str < 127))
			return (0);
		str++;
	}
	return (1);
}
