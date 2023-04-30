/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:06:37 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/15 10:17:30 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int *a, int n)
{
	int	i;
	int	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (a[i - 1] >= a[i])
			low = 0;
		i++;
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar(a[i++] + 48);
		if (a[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	a[10];

	i = 0;
	while (i < n)
		a[i++] = 0;
	while (a[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_write(a, n);
		a[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (a[i] > 9)
			{
				a[i - 1]++;
				a[i] = 0;
			}
			i--;
		}
	}
}

/*int	main()
{
	ft_print_combn(9);
}*/
