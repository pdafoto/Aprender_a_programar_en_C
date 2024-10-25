/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:49:16 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/25 11:00:41 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	find_primes(int n)
{
	int	i;
	int	j;
	int	is_prime;

	i = 2;
	while (i <= n)
	{
		is_prime = 1;
		j = 2;
		while (j * j <= i)
		{
			if (i % j == 0)
			{
				is_prime = 0;
				break ;
			}
			j++;
		}
		if (is_prime)
			printf("%d ", i);
		i++;
	}
}

int	main(void)
{
	int	n;

	printf("Enter an integer\n");
	scanf("%d", &n);
	find_primes(n);
	printf("\n");
	return (0);
}
