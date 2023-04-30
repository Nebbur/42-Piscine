/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:47:57 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/20 08:48:42 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*int main (void)
{
	char src[] = "temos de nos manter juntos...";
	char dest[] = "Nos, os estranhos, ";
	printf("%i \n", ft_strlcat(dest, src, 49));
	printf("%s \n", dest);
}*/
