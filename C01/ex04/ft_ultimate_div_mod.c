/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:17:01 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/14 08:19:07 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*void	ft_print(int p, int p1)
{
	printf("Resultado da divisão: %d", p);
	printf("\nResto da divisão: %d", p1);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a;
	b1 = *b;
	if (b != 0)
	{
		*a = a1 / b1;
		*b = a1 % b1;
	}	
}

/*int	main()
{
	int a;
	int b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	ft_print(a, b);
	return (0);
}*/
