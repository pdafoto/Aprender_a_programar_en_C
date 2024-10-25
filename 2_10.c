/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:20:49 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/25 13:45:16 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	amount;
	int		cents;
	int		two_eur;
	int		one_eur;
	int		fifty_c;
	int		twenty_c;
	int		ten_c;
	int		five_c;
	int		two_c;
	int		one_c;

	printf("Enter an amount in €\n");
	scanf("%f", &amount);
	cents = amount * 100;
	two_eur = cents / 200;
	cents = cents % 200;
	one_eur = cents / 100;
	cents = cents % 100;
	fifty_c = cents / 50;
	cents = cents % 50;
	twenty_c = cents / 20;
	cents = cents % 20;
	ten_c = cents / 10;
	cents = cents % 10;
	five_c = cents / 5;
	cents = cents % 5;
	two_c = cents / 2;
	cents = cents % 2;
	one_c = cents / 1;
	cents = cents % 1;
	printf("The machine needs to return:\n%d 2€ coins\n%d 1€ coins\n%d 50c coins\n%d 20c coins\n%d 10c coins\n%d 5c coins\n%d 2c coins\n%d 1c coins\n", two_eur, one_eur, fifty_c, twenty_c, ten_c, five_c, two_c, one_c);
	return (0);
}
