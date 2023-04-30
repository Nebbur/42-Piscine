/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:11:40 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/09 17:50:22 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, &a[0], 1);
				write(1, &a[1], 1);
				write(1, &a[2], 1);
				a[2]++;
				if (a[0] != '7')
				{
					write (1, ", ", 2);
				}
			}
			a[1]++;
		}
	a[0]++;
	}
}