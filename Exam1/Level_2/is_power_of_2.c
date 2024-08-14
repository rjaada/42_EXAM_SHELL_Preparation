/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:13:40 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/14 16:31:57 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	int	number;

	number = 0;
	if (n != '\0')
		number = n % 2;
	return (number);
}

int	main(int argc, char *argv[])
{
	unsigned int	num;

	if (argc != 2)
	{
		printf("\n");
		return (1);
	}
	num = strtoul(argv[1], NULL, 10);
	printf("%d\n", is_power_of_2(num));
	return (0);
}
