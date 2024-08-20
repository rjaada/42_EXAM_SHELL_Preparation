/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:21:53 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/20 18:00:21 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	put_nbr(int num)
{
	char	digit;

	if (num >= 10)
		put_nbr(num / 10);
	digit = num % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int number)
{
	int	i;

	if (number <= 1)
		return (0);
	if (number == 2 || number == 3)
		return (1);
	if (number % 2 == 0 && number > 2)
		return (0);
	i = 3;
	while (i * i <= number)
	{
		if (number % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_atoi(char *number)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (number[i])
	{
		res = res * 10 + number[i] - 48;
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	int	num;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num > 0)
		{
			while (num > 0)
			{
				if (is_prime(num))
					sum += num;
				num--;
			}
			put_nbr(sum);
		}
		else
			put_nbr(0);
	}
	else
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}
