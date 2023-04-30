/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:21:32 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/03/14 08:22:22 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
void	ft_print(int c1, int c2)
{
	printf("%d", c1);
	printf(" ");
	printf("%d", c2);
	printf("\n");
}*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main()
{
	int c;
	int d;

	c = 42;
	d = 24;

	ft_swap(&c, &d);

	ft_print(c, d);
	return (0);
}*/
