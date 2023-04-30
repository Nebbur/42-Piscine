/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:24:37 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/20 16:22:00 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			count++;
		}
	i++;
	}
	if (count == i)
	{
		return (1);
	}
	else
		return (0);
}

/*int main()
{
	printf("%d", ft_str_is_alpha("fsdsfsdfi"));
	printf("%d", ft_str_is_alpha("fsds6fsdfi"));
	printf("%d", ft_str_is_alpha("456i"));
	printf("%d", ft_str_is_alpha("54865698465165894561651498411644"));
	printf("%d", ft_str_is_alpha(""));
}*/
