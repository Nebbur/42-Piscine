/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:09:40 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/14 08:11:18 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/*
Ao declarar as variaveis:
int	swap0;

Inicio do while:
swap0 = tab[0];

No fim do while:
if (size % 2 != 0 && i + 1 > size / 2)
		{
			tab[0] = swap0;
		}*/
