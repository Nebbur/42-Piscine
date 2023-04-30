/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:23:54 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/16 11:55:34 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i <= size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i - 1] = '\0';
	return (i);
}
/*
int main ()
{
	char dfg[] = "Isto 'e bom";//11
	char src[] = "Isto era'";//15
	printf("%d, %s", ft_strlcpy(dfg, src, 15), dfg);
	return(0);
}*/
