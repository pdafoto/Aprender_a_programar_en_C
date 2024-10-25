/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_7.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:27:53 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/25 11:42:17 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	result;

	i = 1;
	srand(time(NULL));
	while (i <= 15)
	{
		result = 0 + rand() % 3;
		if (result == 0)
			printf("X\n");
		else
			printf("%d\n", result);
		i++;
	}
	return (0);
}
