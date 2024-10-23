/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:57:02 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/23 13:24:38 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	year;

	printf("Write a year\n");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf ("%d is a leap year.\n", year);
			else
				printf ("%d is not a leap year.\n", year);
		}
		else
			printf ("%d is a leap year.\n", year);
	}
	else
		printf ("%d is not a leap year.\n", year);
	return (0);
}
