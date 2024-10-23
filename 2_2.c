/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:28:31 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/23 12:40:01 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("Introduzca dos números enteros\n");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("%d es mayor que %d\n", a, b);
	else
		printf("%d es mayor que %d\n", b, a);
	return (0);
}
