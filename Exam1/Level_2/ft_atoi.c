/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:04:06 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/10 09:15:55 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int	main(int argc, char *argv[])
{
	int	mine;
	int	there;

	if (argc != 2)
	{
		printf("\n");
		return (1);
	}
	mine = ft_atoi(argv[1]);
	there = atoi(argv[1]);
	printf("mine = %d\n", mine);
	printf("there = %d\n", there);
	return (0);
}
