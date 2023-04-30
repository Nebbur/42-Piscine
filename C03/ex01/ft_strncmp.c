/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:36:46 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/20 08:38:07 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i])
		{
			return (1);
		}
		else if (str1[i] < str2[i])
		{
			return (-1);
		}
	i++;
	}
	return (0);
}

/*int main()
{
	char str1[] = "Mitologia";
	char str2[] = "Mitologia";
	int n = 5;
	printf("%d", ft_strncmp(str1, str2, n));
	
	 * Objetivo de strncmp():
	 Se as strings forem identicas return 0;
	 Se str1 tiver mais caracteres que str2 return 1
	 se nao return -1
	 * 
}*/
