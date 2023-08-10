/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:31:49 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 16:31:51 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
/*
int main(void) {
    char str1[] = "Hello World";
    char str2[] = "this is a test-string.";
    char str3[] = "+This is ANother teSt";
    char str4[] = "   ";
    char str5[] = "12345";
    
    printf("Original string: %s\n", str1);
    printf("Uppercase string: %s\n", ft_strupcase(str1));
    printf("\n");
    
    printf("Original string: %s\n", str2);
    printf("Uppercase string: %s\n", ft_strupcase(str2));
    printf("\n");
    
    printf("Original string: %s\n", str3);
    printf("Uppercase string: %s\n", ft_strupcase(str3));
    printf("\n");
    
    printf("Original string: %s\n", str4);
    printf("Uppercase string: %s\n", ft_strupcase(str4));
    printf("\n");
    
    printf("Original string: %s\n", str5);
    printf("Uppercase string: %s\n", ft_strupcase(str5));
    printf("\n");
    
    return 0;
}*/

char	*ft_strupcase(char	*str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if ((*(str + n) >= 'a') && (*(str + n) <= 'z'))
			*(str + n) -= 32;
		n++;
	}
	return (str);
}
