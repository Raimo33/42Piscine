/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:46:28 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 16:46:30 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
/*
int main(void) {
    char str1[] = "Hello World";
    char str2[] = "THIS IS A TEST-STRING.";
    char str3[] = "+This is ANother teSt";
    char str4[] = "   ";
    char str5[] = "12345";
    
    printf("Original string: %s\n", str1);
    printf("Lowercase string: %s\n", ft_strlowcase(str1));
    printf("\n");
    
    printf("Original string: %s\n", str2);
    printf("Lowercase string: %s\n", ft_strlowcase(str2));
    printf("\n");
    
    printf("Original string: %s\n", str3);
    printf("Lowercase string: %s\n", ft_strlowcase(str3));
    printf("\n");
    
    printf("Original string: %s\n", str4);
    printf("Lowercase string: %s\n", ft_strlowcase(str4));
    printf("\n");
    
    printf("Original string: %s\n", str5);
    printf("Lowercase string: %s\n", ft_strlowcase(str5));
    printf("\n");
    
    return 0;
}*/

char	*ft_strlowcase(char	*str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if ((*(str + n) >= 'A') && (*(str + n) <= 'Z'))
			*(str + n) += 32;
		n++;
	}
	return (str);
}
