/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:49:32 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/25 12:22:24 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	randomizer(void)
{
	int	result;

	srand(time(NULL));
	result = 1 + rand() % 100;
	return (result);
}

int	question(void)
{
	int	guess;

	printf("Guess an integer between 1 and 100\n");
	scanf("%d", &guess);
	return (guess);
}

int	main(void)
{
	int	result;
	int	guess;
	int	attempt;

	result = randomizer();
	attempt = 1;
	guess = question();
	while (guess != result)
	{
		if (guess < result)
		{
			printf("Sorry, my number is higher, try again\n");
			attempt++;
			guess = question();
		}
		else if (guess > result)
		{
			printf("Sorry, my number is lower, try again\n");
			attempt++;
			guess = question();
		}
	}
	printf("Congratulations! You guessed my number in %d attempts\n", attempt);
	return (0);
}
