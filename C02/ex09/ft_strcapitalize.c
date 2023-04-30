/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:33:51 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/16 11:23:18 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 90 && str[i] <= 122)
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 32 && str[i -1] <= 47)
		{
			if (str[i] >= 90 && str[i] <= 122)
				str[i] -= 32;
		}	
		i++;
	}
	return (str);
}

/*int main()
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(c));
	return (0);
}*/
