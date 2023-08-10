/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:49:29 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 16:49:30 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_alphanumeric(char *str, int n);
/*
int main(void) 
{
	char str1[] = "what's p? w.";
	char str2[] = "this iS a Test-sTring.w";
	char str3[] = ".sTring";
	char str4[] = "   ";
	char str5[] = "12345";
	
	printf("Original string: %s\n", str1);
	printf("Capitalized string: %s\n", ft_strcapitalize(str1));
	printf("\n");
	
	printf("Original string: %s\n", str2);
	printf("Capitalized string: %s\n", ft_strcapitalize(str2));
	printf("\n");
	
	printf("Original string: %s\n", str3);
	printf("Capitalized string: %s\n", ft_strcapitalize(str3));
	printf("\n");
	
	printf("Original string: %s\n", str4);
	printf("Capitalized string: %s\n", ft_strcapitalize(str4));
	printf("\n");
	
	printf("Original string: %s\n", str5);
	printf("Capitalized string: %s\n", ft_strcapitalize(str5));
	printf("\n");
	
	return 0;
}*/

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (*(str + n) >= 'A' && *(str + n) <= 'Z')
			*(str + n) += 32;
		if (is_alphanumeric(str, n - 1) == 0)
		{
			if (is_alphanumeric(str, n) == 1)
				if (!((*(str + n) >= '0') && (*(str + n) <= '9')))
					*(str + n) -= 32;
		}
		n++;
	}
	return (str);
}

int	is_alphanumeric(char *str, int n)
{
	if (*(str + n) >= 32 && *(str + n) <= 'z')
	{
		if (*(str + n) <= 47)
			return (0);
		else if (*(str + n) >= ':' && *(str + n) <= '@')
			return (0);
		else if (*(str + n) >= '[' && *(str + n) < 'a')
			return (0);
		else if (*(str + n) > 'z')
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
