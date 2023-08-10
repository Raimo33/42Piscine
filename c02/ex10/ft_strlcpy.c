/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:55:30 by craimond          #+#    #+#             */
/*   Updated: 2023/07/23 18:55:31 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
/*
int main(void) {
    char src[] = "Hello, world!";
    char dest[20];
    unsigned int len = ft_strlcpy(dest, src, 5);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("len: %u\n", len);
    printf("strlen(src): %lu\n", strlen(src));
    printf("strlen(dest): %lu\n", strlen(dest));

    return 0;
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
