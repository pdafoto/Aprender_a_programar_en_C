/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_9.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:45:32 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/25 13:14:23 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float	salary(float hours, float price)
{
	float	earned;

	if (hours <= 40)
		earned = hours * price;
	else
		earned = 40 * price + (hours - 40) * price * 1.5;
	return (earned);
}

int	main(void)
{
	float	hours;
	float	price;
	float	earned;

	printf("Enter the number of hours worked:\n");
	scanf("%f", &hours);
	printf("Now enter the price paid per worked hour\n");
	scanf("%f", &price);
	earned = salary(hours, price);
	printf("The worker has earned %.2f€\n", earned);
	return (0);
}
