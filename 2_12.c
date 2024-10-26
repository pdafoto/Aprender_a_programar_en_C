/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:30:51 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/26 13:24:15 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	extract_digits(int num, int *uni, int *ten, int *hun, int *tho, int *t_tho)
{
	*t_tho = num / 10000;
	num = num % 10000;
	*tho = num / 1000;
	num = num % 1000;
	*hun = num / 100;
	num = num % 100;
	*ten = num / 10;
	*uni = num % 10;
}

void	print_tens(int ten, int uni)
{
	if (ten >= 2)
	{
		if (ten == 2)
			printf("twenty");
		else if (ten == 3)
			printf("thirty");
		else if (ten == 4)
			printf("fourty");
		else if (ten == 5)
			printf("fifty");
		else if (ten == 6)
			printf("sixty");
		else if (ten == 7)
			printf("seventy");
		else if (ten == 8)
			printf("eighty");
		else if (ten == 9)
			printf("ninety");
	}
	if (ten >= 2 && uni != 0)
		printf("-");
}

void	print_onetens(int ten, int uni)
{
	if (ten == 1)
	{
		if (uni == 0)
			printf("ten");
		else if (uni == 1)
			printf("eleven");
		else if (uni == 2)
			printf("twelve");
		else if (uni == 3)
			printf("thirteen");
		else if (uni == 4)
			printf("fourteen");
		else if (uni == 5)
			printf("fifteen");
		else if (uni == 6)
			printf("sixteen");
		else if (uni == 7)
			printf("seventeen");
		else if (uni == 8)
			printf("eighteen");
		else if (uni == 9)
			printf("nineteen");
	}
}

void	print_units(int ten, int uni)
{
	if (ten != 1)
	{
		if (uni == 1)
			printf("one");
		else if (uni == 2)
			printf("two");
		else if (uni == 3)
			printf("three");
		else if (uni == 4)
			printf("four");
		else if (uni == 5)
			printf("five");
		else if (uni == 6)
			printf("six");
		else if (uni == 7)
			printf("seven");
		else if (uni == 8)
			printf("eight");
		else if (uni == 9)
			printf("nine");
	}
}

void	print_zero(unsigned int num)
{
	if (num == 0)
		printf("zero");
}

int	main(void)
{
	unsigned int	num;
	int				uni;
	int				ten;
	int				hun;
	int				tho;
	int				t_tho;

	printf("Write a 5-digit num:\n");
	scanf("%d", &num);
	extract_digits(num, &uni, &ten, &hun, &tho, &t_tho);
	print_tens(ten, uni);
	print_onetens(ten, uni);
	print_units(ten, uni);
	print_zero(num);
	printf("\n");
	printf("%i, %i, %i, %i, %i\n", t_tho, tho, hun, ten, uni);
	return (0);
}
