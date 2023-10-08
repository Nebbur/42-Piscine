/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:04:15 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/21 10:06:38 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkerrors(char *base)
{
	int	i;
	int	len;
	int	j;
	
	//printf("\nteste checkerros\n");
	j = 0;
	len = str_len(base);
	i = 0;
/*	if (base[0] != '\0' || base[1] != '\0')
	{
		printf("\nteste ft atoi base if %d\n", base[0] - 48);
			printf("\nteste ft atoi base if %d\n", base[1] - 48);
		return (0);
	}*/
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
	i++;
	}
	return (1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_base(char str, char *base)
{
	int	i;
		printf("\nteste ft base\n");
	i = 0;
	while (base[i] !='\0')
	{
		if (str == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	nb;
	int	nb2;
	int	begin_len;
	
	nb = 0;
	i = 0;
	begin_len = checkerrors(base);
	if (begin_len > 1)
	{
		printf("\nteste ft atoi base primeiro if\n");
		negative = whitespaces(str, &i);
		nb2 = ft_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = ft_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

int main()
{
	//printf("Binario: %d", ft_atoi_base(" --69", "01"));
	printf("\nDecimal: %d", ft_atoi_base("---++++696969", "0123456789"));
	//printf("\nHexadecimal: %d", ft_atoi_base("   ---++", "0123456789ABCDEF"));
	//printf("\nOctal: %d", ft_atoi_base("27", "01234567"));
}
