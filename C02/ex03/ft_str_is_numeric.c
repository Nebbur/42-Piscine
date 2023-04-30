/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:28:47 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/15 17:42:14 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
		}
	i++;
	}
	if (count == i)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d", ft_str_is_numeric("6555"));
	printf("%d", ft_str_is_numeric("2121684as"));
	printf("%d", ft_str_is_numeric("dqdq54"));
	printf("%d", ft_str_is_numeric("afdaaf"));
	printf("%d", ft_str_is_numeric(""));
	return ( 0);
}*/
