/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:19:43 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/14 08:20:55 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
void	ft_print(int p, int p2, int p3, int p50)
{
	printf("%d", p);
	printf(" / ");
	printf("%d", p2);
	printf(" = ");
	printf("%d", p3);
	printf("\nO resto da divisão: %d", p50);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main()
{
	int a;
	int b;
	int d;
	int m;
	
	a = 66;
	b = 10;

	ft_div_mod(a, b, &d, &m);
	ft_print(a, b, d, m);
	return(0);
}*/
