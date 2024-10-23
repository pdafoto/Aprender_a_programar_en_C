/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:09:07 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/23 14:41:59 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		n;
	int		max;
	int 	min;
	int 	i;
	float	sum;
	float	avrg;

	max = INT_MIN;
	min = INT_MAX;
	sum = 0;
	i = 1;
	while (i <= 10)
	{
		printf("Enter an integer\n");
		scanf("%d", &n);
		if (n > max)
			max = n;
		if (n < min)
			min = n;
		sum = sum + n;
		i++;
	}
	avrg = sum / 10;
	printf("The greatest number is %d\n", max);
	printf("The smallest number is %d\n", min);
	printf("The average is %f\n", avrg);
	return (0);
}
