/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:50:02 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/15 18:58:28 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
	i++;
	}
	if (count != i)
		return (0);
	else
		return (1);
}

/*int main()
{
	printf("%d", ft_str_is_uppercase("DOIFNIOEAF"));
	printf("%d", ft_str_is_uppercase("sdfihusdf"));
	printf("%d", ft_str_is_uppercase("D5F"));
	printf("%d", ft_str_is_uppercase("DOIFNfsdF"));
}*/
