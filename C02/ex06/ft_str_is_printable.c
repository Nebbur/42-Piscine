/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:59:43 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/15 19:14:28 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("df afP[-+dfs"));
	printf("%d", ft_str_is_printable("\nsf"));
	printf("%d", ft_str_is_printable(""));
}*/
