/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:33:26 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/15 18:45:07 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d", ft_str_is_lowercase("soif"));
	printf("%d", ft_str_is_lowercase("soif56"));
	printf("%d", ft_str_is_lowercase("4soif"));
	printf("%d", ft_str_is_lowercase("soFf"));
	printf("%d", ft_str_is_lowercase("JAI SOIF DE SANG (c faux)"));


}*/
